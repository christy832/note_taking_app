<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form1))
        Me.Label1 = New System.Windows.Forms.Label()
        Me.CurrentProject = New System.Windows.Forms.Label()
        Me.CurrentScenario = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.ListAreas = New System.Windows.Forms.Button()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.AreaList = New System.Windows.Forms.ListBox()
        Me.ComponentList = New System.Windows.Forms.ListBox()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.ListComponents = New System.Windows.Forms.Button()
        Me.EvaluateProject = New System.Windows.Forms.Button()
        Me.PropertiesList = New System.Windows.Forms.ListBox()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.GetComponentProperties = New System.Windows.Forms.Button()
        Me.TextBox1 = New System.Windows.Forms.TextBox()
        Me.ExitButton = New System.Windows.Forms.Button()
        Me.DataLoading = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(185, 18)
        Me.Label1.Margin = New System.Windows.Forms.Padding(2, 0, 2, 0)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(80, 13)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "Current Project:"
        '
        'CurrentProject
        '
        Me.CurrentProject.AutoSize = True
        Me.CurrentProject.Location = New System.Drawing.Point(278, 18)
        Me.CurrentProject.Margin = New System.Windows.Forms.Padding(2, 0, 2, 0)
        Me.CurrentProject.MinimumSize = New System.Drawing.Size(225, 14)
        Me.CurrentProject.Name = "CurrentProject"
        Me.CurrentProject.Size = New System.Drawing.Size(225, 14)
        Me.CurrentProject.TabIndex = 1
        Me.CurrentProject.Text = "(Current Project)"
        '
        'CurrentScenario
        '
        Me.CurrentScenario.AutoSize = True
        Me.CurrentScenario.Location = New System.Drawing.Point(278, 39)
        Me.CurrentScenario.Margin = New System.Windows.Forms.Padding(2, 0, 2, 0)
        Me.CurrentScenario.MinimumSize = New System.Drawing.Size(225, 14)
        Me.CurrentScenario.Name = "CurrentScenario"
        Me.CurrentScenario.Size = New System.Drawing.Size(225, 14)
        Me.CurrentScenario.TabIndex = 3
        Me.CurrentScenario.Text = "(Current Scenario)"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(185, 39)
        Me.Label3.Margin = New System.Windows.Forms.Padding(2, 0, 2, 0)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(89, 13)
        Me.Label3.TabIndex = 2
        Me.Label3.Text = "Current Scenario:"
        '
        'ListAreas
        '
        Me.ListAreas.Location = New System.Drawing.Point(183, 92)
        Me.ListAreas.Margin = New System.Windows.Forms.Padding(2)
        Me.ListAreas.Name = "ListAreas"
        Me.ListAreas.Size = New System.Drawing.Size(132, 37)
        Me.ListAreas.TabIndex = 5
        Me.ListAreas.Text = "List areas in selected project"
        Me.ListAreas.UseVisualStyleBackColor = True
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(350, 75)
        Me.Label2.Margin = New System.Windows.Forms.Padding(2, 0, 2, 0)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(34, 13)
        Me.Label2.TabIndex = 6
        Me.Label2.Text = "Areas"
        '
        'AreaList
        '
        Me.AreaList.FormattingEnabled = True
        Me.AreaList.Location = New System.Drawing.Point(352, 92)
        Me.AreaList.Margin = New System.Windows.Forms.Padding(2)
        Me.AreaList.Name = "AreaList"
        Me.AreaList.Size = New System.Drawing.Size(343, 56)
        Me.AreaList.TabIndex = 7
        '
        'ComponentList
        '
        Me.ComponentList.FormattingEnabled = True
        Me.ComponentList.Location = New System.Drawing.Point(352, 190)
        Me.ComponentList.Margin = New System.Windows.Forms.Padding(2)
        Me.ComponentList.Name = "ComponentList"
        Me.ComponentList.Size = New System.Drawing.Size(343, 56)
        Me.ComponentList.TabIndex = 10
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Location = New System.Drawing.Point(350, 172)
        Me.Label4.Margin = New System.Windows.Forms.Padding(2, 0, 2, 0)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(66, 13)
        Me.Label4.TabIndex = 9
        Me.Label4.Text = "Components"
        '
        'ListComponents
        '
        Me.ListComponents.Location = New System.Drawing.Point(183, 190)
        Me.ListComponents.Margin = New System.Windows.Forms.Padding(2)
        Me.ListComponents.Name = "ListComponents"
        Me.ListComponents.Size = New System.Drawing.Size(132, 37)
        Me.ListComponents.TabIndex = 8
        Me.ListComponents.Text = "List components in selected area"
        Me.ListComponents.UseVisualStyleBackColor = True
        '
        'EvaluateProject
        '
        Me.EvaluateProject.Location = New System.Drawing.Point(183, 280)
        Me.EvaluateProject.Margin = New System.Windows.Forms.Padding(2)
        Me.EvaluateProject.Name = "EvaluateProject"
        Me.EvaluateProject.Size = New System.Drawing.Size(132, 37)
        Me.EvaluateProject.TabIndex = 11
        Me.EvaluateProject.Text = "Evaluate selected project"
        Me.EvaluateProject.UseVisualStyleBackColor = True
        '
        'PropertiesList
        '
        Me.PropertiesList.FormattingEnabled = True
        Me.PropertiesList.Location = New System.Drawing.Point(352, 362)
        Me.PropertiesList.Margin = New System.Windows.Forms.Padding(2)
        Me.PropertiesList.Name = "PropertiesList"
        Me.PropertiesList.Size = New System.Drawing.Size(343, 56)
        Me.PropertiesList.TabIndex = 14
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Location = New System.Drawing.Point(350, 344)
        Me.Label5.Margin = New System.Windows.Forms.Padding(2, 0, 2, 0)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(54, 13)
        Me.Label5.TabIndex = 13
        Me.Label5.Text = "Properties"
        '
        'GetComponentProperties
        '
        Me.GetComponentProperties.Location = New System.Drawing.Point(183, 362)
        Me.GetComponentProperties.Margin = New System.Windows.Forms.Padding(2)
        Me.GetComponentProperties.Name = "GetComponentProperties"
        Me.GetComponentProperties.Size = New System.Drawing.Size(132, 37)
        Me.GetComponentProperties.TabIndex = 12
        Me.GetComponentProperties.Text = "List properties of selected component"
        Me.GetComponentProperties.UseVisualStyleBackColor = True
        '
        'TextBox1
        '
        Me.TextBox1.BackColor = System.Drawing.SystemColors.ButtonFace
        Me.TextBox1.BorderStyle = System.Windows.Forms.BorderStyle.None
        Me.TextBox1.Cursor = System.Windows.Forms.Cursors.Arrow
        Me.TextBox1.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.TextBox1.Location = New System.Drawing.Point(14, 18)
        Me.TextBox1.Margin = New System.Windows.Forms.Padding(2)
        Me.TextBox1.Multiline = True
        Me.TextBox1.Name = "TextBox1"
        Me.TextBox1.ReadOnly = True
        Me.TextBox1.RightToLeft = System.Windows.Forms.RightToLeft.No
        Me.TextBox1.Size = New System.Drawing.Size(139, 182)
        Me.TextBox1.TabIndex = 15
        Me.TextBox1.TabStop = False
        Me.TextBox1.Text = resources.GetString("TextBox1.Text")
        '
        'ExitButton
        '
        Me.ExitButton.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.ExitButton.Location = New System.Drawing.Point(14, 204)
        Me.ExitButton.Margin = New System.Windows.Forms.Padding(2)
        Me.ExitButton.Name = "ExitButton"
        Me.ExitButton.Size = New System.Drawing.Size(139, 76)
        Me.ExitButton.TabIndex = 16
        Me.ExitButton.Text = "EXIT" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "(Return to Aspen KBase)"
        Me.ExitButton.UseVisualStyleBackColor = True
        '
        'DataLoading
        '
        Me.DataLoading.AutoSize = True
        Me.DataLoading.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.DataLoading.ForeColor = System.Drawing.Color.Red
        Me.DataLoading.Location = New System.Drawing.Point(14, 301)
        Me.DataLoading.Margin = New System.Windows.Forms.Padding(2, 0, 2, 0)
        Me.DataLoading.Name = "DataLoading"
        Me.DataLoading.Size = New System.Drawing.Size(101, 16)
        Me.DataLoading.TabIndex = 17
        Me.DataLoading.Text = "Data Loading ..."
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(716, 458)
        Me.Controls.Add(Me.DataLoading)
        Me.Controls.Add(Me.ExitButton)
        Me.Controls.Add(Me.TextBox1)
        Me.Controls.Add(Me.PropertiesList)
        Me.Controls.Add(Me.Label5)
        Me.Controls.Add(Me.GetComponentProperties)
        Me.Controls.Add(Me.EvaluateProject)
        Me.Controls.Add(Me.ComponentList)
        Me.Controls.Add(Me.Label4)
        Me.Controls.Add(Me.ListComponents)
        Me.Controls.Add(Me.AreaList)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.ListAreas)
        Me.Controls.Add(Me.CurrentScenario)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.CurrentProject)
        Me.Controls.Add(Me.Label1)
        Me.Icon = CType(resources.GetObject("$this.Icon"), System.Drawing.Icon)
        Me.Margin = New System.Windows.Forms.Padding(2)
        Me.MinimumSize = New System.Drawing.Size(724, 485)
        Me.Name = "Form1"
        Me.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Hide
        Me.Text = "ICAPI Example Application"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents CurrentProject As System.Windows.Forms.Label
    Friend WithEvents CurrentScenario As System.Windows.Forms.Label
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents ListAreas As System.Windows.Forms.Button
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents AreaList As System.Windows.Forms.ListBox
    Friend WithEvents ComponentList As System.Windows.Forms.ListBox
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents ListComponents As System.Windows.Forms.Button
    Friend WithEvents EvaluateProject As System.Windows.Forms.Button
    Friend WithEvents PropertiesList As System.Windows.Forms.ListBox
    Friend WithEvents Label5 As System.Windows.Forms.Label
    Friend WithEvents GetComponentProperties As System.Windows.Forms.Button
    Friend WithEvents TextBox1 As System.Windows.Forms.TextBox
    Friend WithEvents ExitButton As System.Windows.Forms.Button
    Friend WithEvents DataLoading As System.Windows.Forms.Label

End Class
