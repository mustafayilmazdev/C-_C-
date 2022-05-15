<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="WebForm5.aspx.cs" Inherits="WebApplication6.WebForm5" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>

    <link href="css/bootstrap.min.css" rel="stylesheet" />
    <link href="css/stillerim.css" rel="stylesheet" />
</head>
<body>
    <form id="form1" runat="server">
    <div class="container">
        <div class="row mt-5 align-items-center" >
            <div class="col-2" style="font-size:25px;">
                <asp:label runat="server" text="Label">Öğrenci Adı:</asp:label>
            </div>
            <div class="col">
                <asp:TextBox ID="TextBox1"  AutoCompleteType="Disabled" runat="server"></asp:TextBox>
            </div>
        </div>
        <div class="row">
            <div class="col">
                <asp:Button ID="Button1" runat="server" Text="Ekle" OnClick="Button1_Click" />
             
             
                </asp:DropDownList>
            </div>
        </div>
    
    </div>
    </form>
</body>

</html>
