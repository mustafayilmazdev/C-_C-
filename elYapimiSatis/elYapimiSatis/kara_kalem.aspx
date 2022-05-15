<%@ Page Title="" Language="C#" MasterPageFile="~/sablon.Master" AutoEventWireup="true" CodeBehind="kara_kalem.aspx.cs" Inherits="elYapimiSatis.kara_kalem" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <div class="container p-5">
        <div class="row">
            <div class="col-12 text-center">
                <h1 style="color:rgb(71, 138, 201); text-decoration:underline">Kara Kalem</h1>
            </div>
           
        </div>
        <div class="row p-2">
           <div class="col-6 border border-dark rounded p-2">
              <div class="row">
                   <div class="col-8">
                    <img src="resimler/kara kalem/1.jpg" class="img-fluid"/>
               </div>
               <div class="col-4">
                   <div class="row">
                       <div class="col-12">
                           <h2>Başlık</h2>
                       </div>
                       <div class="col-12">
                           Açıklama
                       </div>
                       <div class="col-12 mt-5">
                           <asp:Button ID="Button1" runat="server" Text="Satın Al" BackColor="SkyBlue" />
                       </div>
                   </div>
               </div>
              </div>
           </div>
            <div class="col-6 border border-dark rounded p-2">
                  <div class="row">
                   <div class="col-8">
                    <img src="resimler/kara kalem/2.jpg" class="img-fluid"/>
               </div>
               <div class="col-4">
                   <div class="row">
                       <div class="col-12">
                           <h2>Başlık</h2>
                       </div>
                       <div class="col-12">
                           Açıklama
                       </div>
                       <div class="col-12 mt-5">
                           <asp:Button ID="Button2" runat="server" Text="Satın Al" BackColor="SkyBlue" />
                       </div>
                   </div>
               </div>
              </div>
            </div>
        </div>
       <div class="row p-2">
           <div class="col-6 border border-dark rounded p-2">
              <div class="row">
                   <div class="col-8">
                    <img src="resimler/kara kalem/3.jpg" class="img-fluid"/>
               </div>
               <div class="col-4">
                   <div class="row">
                       <div class="col-12">
                           <h2>Başlık</h2>
                       </div>
                       <div class="col-12">
                           Açıklama
                       </div>
                       <div class="col-12 mt-5">
                           <asp:Button ID="Button3" runat="server" Text="Satın Al" BackColor="SkyBlue" />
                       </div>
                   </div>
               </div>
              </div>
           </div>
            <div class="col-6 border border-dark rounded p-2">
                  <div class="row">
                   <div class="col-8">
                    <img src="resimler/kara kalem/4.jpg" class="img-fluid"/>
               </div>
               <div class="col-4">
                   <div class="row">
                       <div class="col-12">
                           <h2>Başlık</h2>
                       </div>
                       <div class="col-12">
                           Açıklama
                       </div>
                       <div class="col-12 mt-5">
                           <asp:Button ID="Button4" runat="server" Text="Satın Al" BackColor="SkyBlue" />
                       </div>
                   </div>
               </div>
              </div>
            </div>
        </div>
    </div>
</asp:Content>
