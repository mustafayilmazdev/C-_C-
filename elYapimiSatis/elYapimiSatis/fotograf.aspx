<%@ Page Title="" Language="C#" MasterPageFile="~/sablon.Master" AutoEventWireup="true" CodeBehind="fotograf.aspx.cs" Inherits="elYapimiSatis.fotograf" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <div class="container p-5">
        <div class="row">
            <div class="col-12 text-center">
                <h1 style="color:rgb(71, 138, 201); " class="text-right">Fotoğraf Sergimiz</h1>
            </div>
           
        </div>

        <div class="row align-items-center justify-content-center" style="background-image:linear-gradient(to right,rgba(71, 138, 201) ,white)">
            <div class="col-12">
            <div class="row p-5">
            <div class="col-5 p-3">
                <img src="resimler/fotoğraflar/2.JPG" class="img-fluid" />
            </div>
           <div class="col-7 p-3">
               <div  class="row">
                      <div class="col-12 p-1">
                <img src="resimler/fotoğraflar/1.JPG" class="img-fluid" />
            </div>
            <div class="col-12 p-1">
                <img src="resimler/fotoğraflar/3.JPG" class="img-fluid" />
            </div>
               </div>
           </div>
        </div>

                   <div class="row p-5">
            <div class="col-4">
                <img src="resimler/fotoğraflar/4.JPG" class="img-fluid" />
            </div>
            <div class="col-4">
                <img src="resimler/fotoğraflar/5.JPG" class="img-fluid" />
            </div>
            <div class="col-4">
                <img src="resimler/fotoğraflar/6.JPG" class="img-fluid" />
            </div>
        </div>
            </div>
            
        </div>
    </div>
</asp:Content>
