' ICAPI Example Application (VB.NET)
' 
'
' 29 Jul 2010:  Migrated VB6 code to VB.NET

Imports ICAPILib = AspenTech.Interop.AspenIcarus.ICAPICOM


Public Class Form1

    Private szSelectedProjName As String
    Private szSelectedScenarioName As String
    Private szSelectedObjectName As String
    Private szSelectedObjectClassId As String
    Private blnProjectEvaluated As Boolean

    'Populate the project and scenario names
    Private Sub Form1_Load(ByVal sender As Object, ByVal e As System.EventArgs) Handles Me.Load

        DataLoading.Visible = False

        GetCommandLine()

        CurrentProject.Text = szSelectedProjName
        CurrentScenario.Text = szSelectedScenarioName
        blnProjectEvaluated = False

        MsgBox("To run this example, click on buttons from top to bottom while selecting items from the appropriate list boxes.")

    End Sub

    'Exit the ICAPI Example Application
    Private Sub ExitButton_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ExitButton.Click
        Me.Close()
    End Sub

    'Extract parameters from the command line
    Private Sub GetCommandLine()

        Dim CmdArray() As String

        CmdArray = Split(Command$, Chr(34))

        Select Case CmdArray.Length
            Case 1
                szSelectedProjName = ""
                szSelectedScenarioName = ""
                szSelectedObjectName = ""
                szSelectedObjectClassId = ""
            Case 3
                szSelectedProjName = CmdArray(1)
                szSelectedScenarioName = ""
                szSelectedObjectName = ""
                szSelectedObjectClassId = ""
            Case 5
                szSelectedProjName = CmdArray(1)
                szSelectedScenarioName = CmdArray(3)
                szSelectedObjectName = ""
                szSelectedObjectClassId = ""
            Case 7
                szSelectedProjName = CmdArray(1)
                szSelectedScenarioName = CmdArray(3)
                szSelectedObjectName = CmdArray(5)
                szSelectedObjectClassId = ""
            Case 9
                szSelectedProjName = CmdArray(1)
                szSelectedScenarioName = CmdArray(3)
                szSelectedObjectName = CmdArray(5)
                szSelectedObjectClassId = CmdArray(7)
            Case Else
                szSelectedProjName = CmdArray(1)
                szSelectedScenarioName = CmdArray(3)
                szSelectedObjectName = CmdArray(5)
                szSelectedObjectClassId = CmdArray(7)
        End Select

    End Sub

    'List all of the areas contained in the selected project
    Private Sub ListAreas_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ListAreas.Click

        Dim Icarus As ICAPILib.System = New ICAPILib.System
        Dim Proj As ICAPILib.Project = New ICAPILib.Project
        Dim szProjName As String
        Dim szScenarioName As String
        Dim nUserInstance As Long
        Dim bRet As Boolean

        Dim Area As ICAPILib.ICObject
        Dim Areas As ICAPILib.ICObjects
        Dim szAreaName As String

        ' Cleanup the listbox
        AreaList.Items.Clear()

        szProjName = szSelectedProjName
        If szProjName = "" Then
            MsgBox("Missing Project Name")
            Proj = Nothing
            Icarus = Nothing
            Exit Sub
        End If

        szScenarioName = szSelectedScenarioName
        If szScenarioName = "" Then
            MsgBox("Missing Scenario Name")
            Proj = Nothing
            Icarus = Nothing
            Exit Sub
        End If

        DataLoading.Visible = True
        DataLoading.Refresh()


        If Icarus.Initialize Then
            bRet = Icarus.Login("John Smith", nUserInstance)
            If bRet Then
                If Proj.Open(Icarus, szProjName, szScenarioName) Then
                    Areas = Proj.Areas
                    For Each Area In Areas
                        szAreaName = Area.ObjectName
                        AreaList.Items.Add(szAreaName)
                    Next 'Area
                End If

                ' Select the first one.
                If AreaList.Items.Count >= 1 Then
                    AreaList.SelectedIndex = 0
                End If

                bRet = Icarus.Terminate
            End If
        Else
            MsgBox("The Icarus.Initialize() COM method call was unsuccessful")
        End If

        Proj = Nothing
        Icarus = Nothing

        DataLoading.Visible = False

    End Sub

    'List all of the components contained in the selected area
    Private Sub ListComponents_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ListComponents.Click

        Dim Icarus As ICAPILib.System
        Dim Proj As ICAPILib.Project
        Dim szProjName As String
        Dim szScenarioName As String
        Dim nUserInstance As Long
        Dim bRet As Boolean

        Dim Area As ICAPILib.ICObject
        Dim szAreaName As String

        Dim Component As ICAPILib.ICObject
        Dim Components As ICAPILib.ICObjects
        Dim szComponentName As String


        Icarus = New ICAPILib.System
        Proj = New ICAPILib.Project
        Area = New ICAPILib.ICObject

        ' Cleanup the listbox
        ComponentList.Items.Clear()

        szProjName = szSelectedProjName
        szAreaName = AreaList.Text
        If szProjName = "" Or szAreaName = "" Then
            MsgBox("Missing Project or Area Name. Please select the desired area in the current project")
            Proj = Nothing
            Icarus = Nothing
            Exit Sub
        End If

        szScenarioName = szSelectedScenarioName
        If szScenarioName = "" Then
            MsgBox("Missing Scenario Name")
            Proj = Nothing
            Icarus = Nothing
            Exit Sub
        End If

        DataLoading.Visible = True
        DataLoading.Refresh()

        If Icarus.Initialize Then
            bRet = Icarus.Login("John Smith", nUserInstance)
            If bRet Then
                If Proj.Open(Icarus, szProjName, szScenarioName) Then
                    If Area.Open(szAreaName, ICAPILib.icObjectClassType.icClassProjectArea, Proj) Then
                        Components = Area.ProjectComponents
                        For Each Component In Components
                            szComponentName = Component.ObjectName
                            ComponentList.Items.Add(szComponentName)
                        Next 'Area
                    End If
                End If
                ' Select the first one.
                If ComponentList.Items.Count >= 1 Then
                    ComponentList.SelectedIndex = 0
                End If

                bRet = Icarus.Terminate
            End If
        End If

        Component = Nothing
        Proj = Nothing
        Icarus = Nothing

        DataLoading.Visible = False

    End Sub

    'Evaluate the currently selected project
    Private Sub EvaluateProject_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles EvaluateProject.Click

        Dim Icarus As ICAPILib.System
        Dim Proj As ICAPILib.Project
        Dim szProjName As String
        Dim szScenarioName As String
        Dim nUserInstance As Long
        Dim bRet As Boolean
        Dim vFatalErrors As Integer
        Dim vErrors As Integer
        Dim vWarnings As Integer

        Icarus = New ICAPILib.System
        Proj = New ICAPILib.Project

        szProjName = szSelectedProjName
        If szProjName = "" Then
            MsgBox("Missing Project Name")
            Proj = Nothing
            Icarus = Nothing
            Exit Sub
        End If

        szScenarioName = szSelectedScenarioName
        If szScenarioName = "" Then
            MsgBox("Missing Scenario Name")
            Proj = Nothing
            Icarus = Nothing
            Exit Sub
        End If


        If Icarus.Initialize Then
            bRet = Icarus.Login("John Smith", nUserInstance)
            With Proj
                bRet = .Open(Icarus, szProjName)
                If .IsValid Then
                    bRet = .Scan("Result.scn", vFatalErrors, vErrors, vWarnings)
                    If bRet Then
                        ' Check for errors, use notepad to display the error messages
                        If vFatalErrors > 0 Or vErrors > 0 Or vWarnings > 0 Then
                            'MsgBox("Messages are found in file Result.mg1 .")
                        End If
                    End If
                    bRet = .Evaluate("Result.ccp", vFatalErrors, vErrors, vWarnings)
                    If bRet Then
                        ' Check for errors, use notepad to display the error messages
                        If vFatalErrors > 0 Or vErrors > 0 Or vWarnings > 0 Then
                            'MsgBox("Messages are found in file Result.mg1 .")
                        End If
                        .LoadResults()
                        .CloseResults()
                        blnProjectEvaluated = True
                        MsgBox("Completed project evaluation and loaded results database information.")
                    Else
                        blnProjectEvaluated = False
                        MsgBox("Project evaluation was not successful.")
                    End If

                End If
            End With

            bRet = Icarus.Terminate
        End If

        Proj = Nothing
        Icarus = Nothing
    End Sub


    'List some of the properties of selected component
    Private Sub GetComponentProperties_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles GetComponentProperties.Click

        Dim Icarus As ICAPILib.System
        Dim Proj As ICAPILib.Project
        Dim szProjName As String
        Dim szScenarioName As String
        Dim nUserInstance As Long
        Dim bRet As Boolean

        Dim Area As ICAPILib.ICObject
        Dim szAreaName As String

        Dim Component As ICAPILib.ICObject
        Dim szComponentName As String


        Icarus = New ICAPILib.System
        Proj = New ICAPILib.Project
        Area = New ICAPILib.ICObject
        Component = New ICAPILib.ICObject

        ' Cleanup the listbox
        PropertiesList.Items.Clear()

        szProjName = szSelectedProjName
        szScenarioName = szSelectedScenarioName
        szAreaName = AreaList.Text
        szComponentName = ComponentList.Text
        If szProjName = "" Or szScenarioName = "" Or szAreaName = "" Or szComponentName = "" Then
            MsgBox("Missing Project/Scenario/Area/Component Name. Please select an area and a project component in the current project.")
            Component = Nothing
            Proj = Nothing
            Icarus = Nothing
            Exit Sub
        End If

        If Not blnProjectEvaluated Then
            MsgBox("Please click the 'Evaluate Selected Project' button before listing the component properties.")
            Component = Nothing
            Proj = Nothing
            Icarus = Nothing
            Exit Sub
        End If

        DataLoading.Visible = True
        DataLoading.Refresh()

        If blnProjectEvaluated And Icarus.Initialize Then
            bRet = Icarus.Login("John Smith", nUserInstance)
            If bRet Then
                If Proj.Open(Icarus, szProjName, szScenarioName) Then
                    If Area.Open(szAreaName, ICAPILib.icObjectClassType.icClassProjectArea, Proj) Then
                        If Component.Open(szComponentName, ICAPILib.icObjectClassType.icClassProjectComponent, Area) And Component.IsValid Then
                            Proj.OpenResults()
                            bRet = GetResultSlotNames(Component)
                            Proj.CloseResults()
                        End If
                    End If
                End If
                bRet = Icarus.Terminate
            End If
        End If

        Component = Nothing
        Proj = Nothing
        Icarus = Nothing

        DataLoading.Visible = False

    End Sub


    'Gets the result attributes of selected component
    Public Function GetResultSlotNames(ByVal Component As ICAPILib.ICObject) As Boolean

        Dim bRet As Boolean
        Dim aszTextArray As Object
        Dim szText As String
        Dim nCounter As Integer
        Dim nNum As Integer
        Dim CurSlot As ICAPILib.Slot

        ' To get the names of some of the other result slots, use the following function call
        CurSlot = Component.ResultAttributes

        If Not CurSlot.ValueAsArray Is Nothing Then
            aszTextArray = CurSlot.ValueAsArray
            nNum = UBound(aszTextArray)
            For nCounter = 1 To nNum
                szText = aszTextArray(nCounter)
                bRet = GetResultInfo(Component, szText)
            Next nCounter
        End If

        CurSlot = Nothing
        bRet = True
        GetResultSlotNames = True

    End Function


    ' Displays the result in the Properties listbox
    Public Function GetResultInfo(ByVal Component As ICAPILib.ICObject, ByVal szSlotName As String) As Boolean

        Dim bRet As Boolean
        Dim szBuf As String
        Dim szValue As String
        Dim szUnits As String
        Dim TempValArray As Object
        Dim CurSlot As ICAPILib.Slot

        bRet = False
        CurSlot = New ICAPILib.Slot
        CurSlot = Component.ResultValue(szSlotName)

        If Not CurSlot Is Nothing Then
            If CurSlot.IsValid Then
                If CurSlot.IsList Then
                    TempValArray = CurSlot.ValueAsArray
                    szValue = TempValArray(1)
                    szUnits = TempValArray(2)
                    bRet = True
                ElseIf CurSlot.HasUnits Then
                    szValue = Str(CurSlot.Value)
                    szUnits = CurSlot.Units
                    bRet = True
                ElseIf CurSlot.IsText Then
                    szValue = CurSlot.Value
                    bRet = True
                End If
            End If
        End If

        If bRet Then
            szBuf = szSlotName & " : " & szValue & " " & szUnits
            PropertiesList.Items.Add(szBuf)
        End If

        CurSlot = Nothing
        GetResultInfo = bRet

    End Function


    Private Sub Form1_Paint(ByVal sender As Object, ByVal e As System.Windows.Forms.PaintEventArgs) Handles Me.Paint

        Dim g As Graphics = e.Graphics
        Dim pn As Pen = New Pen(Color.Black)
        Dim pt1 As Point = New Point(166, 18)
        Dim pt2 As Point = New Point(166, 399)
        Dim pt3 As Point = New Point(156, 379)
        Dim pt4 As Point = New Point(176, 379)

        Dim pt5 As Point = New Point(183, 66)
        Dim pt6 As Point = New Point(695, 66)
        Dim pt7 As Point = New Point(183, 163)
        Dim pt8 As Point = New Point(695, 163)
        Dim pt9 As Point = New Point(183, 262)
        Dim pt10 As Point = New Point(695, 262)
        Dim pt11 As Point = New Point(183, 333)
        Dim pt12 As Point = New Point(695, 333)
        'Dim pt13 As Point = New Point(183, 437)
        'Dim pt14 As Point = New Point(695, 437)

        Dim pt13 As Point = New Point(315, 110)
        Dim pt14 As Point = New Point(352, 110)
        Dim pt15 As Point = New Point(332, 100)
        Dim pt16 As Point = New Point(332, 120)

        Dim pt17 As Point = New Point(315, 208)
        Dim pt18 As Point = New Point(352, 208)
        Dim pt19 As Point = New Point(332, 198)
        Dim pt20 As Point = New Point(332, 218)

        Dim pt21 As Point = New Point(315, 380)
        Dim pt22 As Point = New Point(352, 380)
        Dim pt23 As Point = New Point(332, 370)
        Dim pt24 As Point = New Point(332, 390)

        g.DrawLine(pn, pt1, pt2)
        g.DrawLine(pn, pt2, pt3)
        g.DrawLine(pn, pt2, pt4)

        g.DrawLine(pn, pt5, pt6)
        g.DrawLine(pn, pt7, pt8)
        g.DrawLine(pn, pt9, pt10)
        g.DrawLine(pn, pt11, pt12)
        'g.DrawLine(pn, pt13, pt14)
        g.DrawLine(pn, pt13, pt14)
        g.DrawLine(pn, pt14, pt15)
        g.DrawLine(pn, pt14, pt16)
        g.DrawLine(pn, pt17, pt18)
        g.DrawLine(pn, pt18, pt19)
        g.DrawLine(pn, pt18, pt20)
        g.DrawLine(pn, pt21, pt22)
        g.DrawLine(pn, pt22, pt23)
        g.DrawLine(pn, pt22, pt24)

        pn = Nothing
        pt1 = Nothing
        pt2 = Nothing
        pt3 = Nothing
        pt4 = Nothing
        pt5 = Nothing
        pt6 = Nothing
        pt7 = Nothing
        pt8 = Nothing
        pt9 = Nothing
        pt10 = Nothing
        pt11 = Nothing
        pt12 = Nothing
        pt13 = Nothing
        pt14 = Nothing
        pt15 = Nothing
        pt16 = Nothing
        pt17 = Nothing
        pt18 = Nothing
        pt19 = Nothing
        pt20 = Nothing
        pt21 = Nothing
        pt22 = Nothing
        pt23 = Nothing
        pt24 = Nothing

    End Sub
End Class
