namespace menuTasarim
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.panelMenu = new System.Windows.Forms.Panel();
            this.panelLogo = new System.Windows.Forms.Panel();
            this.butonEkle = new System.Windows.Forms.Button();
            this.butonGuncelle = new System.Windows.Forms.Button();
            this.butonAra = new System.Windows.Forms.Button();
            this.panelBaslik = new System.Windows.Forms.Panel();
            this.lblBaslik = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.panelGoruntu = new System.Windows.Forms.Panel();
            this.butonCocukFormKapat = new System.Windows.Forms.Button();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.butonKapat = new System.Windows.Forms.Button();
            this.butonMaksimize = new System.Windows.Forms.Button();
            this.butonMinimize = new System.Windows.Forms.Button();
            this.panelMenu.SuspendLayout();
            this.panelLogo.SuspendLayout();
            this.panelBaslik.SuspendLayout();
            this.panelGoruntu.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // panelMenu
            // 
            this.panelMenu.BackColor = System.Drawing.Color.Tan;
            this.panelMenu.Controls.Add(this.butonAra);
            this.panelMenu.Controls.Add(this.butonGuncelle);
            this.panelMenu.Controls.Add(this.butonEkle);
            this.panelMenu.Controls.Add(this.panelLogo);
            this.panelMenu.Dock = System.Windows.Forms.DockStyle.Left;
            this.panelMenu.Location = new System.Drawing.Point(0, 0);
            this.panelMenu.Name = "panelMenu";
            this.panelMenu.Size = new System.Drawing.Size(220, 718);
            this.panelMenu.TabIndex = 0;
            // 
            // panelLogo
            // 
            this.panelLogo.BackColor = System.Drawing.Color.BurlyWood;
            this.panelLogo.Controls.Add(this.label1);
            this.panelLogo.Dock = System.Windows.Forms.DockStyle.Top;
            this.panelLogo.Location = new System.Drawing.Point(0, 0);
            this.panelLogo.Name = "panelLogo";
            this.panelLogo.Size = new System.Drawing.Size(220, 80);
            this.panelLogo.TabIndex = 0;
            // 
            // butonEkle
            // 
            this.butonEkle.Dock = System.Windows.Forms.DockStyle.Top;
            this.butonEkle.FlatAppearance.BorderSize = 0;
            this.butonEkle.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.butonEkle.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.butonEkle.ForeColor = System.Drawing.Color.Black;
            this.butonEkle.Image = ((System.Drawing.Image)(resources.GetObject("butonEkle.Image")));
            this.butonEkle.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.butonEkle.Location = new System.Drawing.Point(0, 80);
            this.butonEkle.Name = "butonEkle";
            this.butonEkle.Padding = new System.Windows.Forms.Padding(12);
            this.butonEkle.Size = new System.Drawing.Size(220, 60);
            this.butonEkle.TabIndex = 0;
            this.butonEkle.Text = "Ekle";
            this.butonEkle.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.butonEkle.TextImageRelation = System.Windows.Forms.TextImageRelation.ImageBeforeText;
            this.butonEkle.UseVisualStyleBackColor = true;
            this.butonEkle.Click += new System.EventHandler(this.butonEkle_Click);
            // 
            // butonGuncelle
            // 
            this.butonGuncelle.Dock = System.Windows.Forms.DockStyle.Top;
            this.butonGuncelle.FlatAppearance.BorderSize = 0;
            this.butonGuncelle.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.butonGuncelle.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.butonGuncelle.ForeColor = System.Drawing.Color.Black;
            this.butonGuncelle.Image = ((System.Drawing.Image)(resources.GetObject("butonGuncelle.Image")));
            this.butonGuncelle.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.butonGuncelle.Location = new System.Drawing.Point(0, 140);
            this.butonGuncelle.Name = "butonGuncelle";
            this.butonGuncelle.Padding = new System.Windows.Forms.Padding(12);
            this.butonGuncelle.Size = new System.Drawing.Size(220, 60);
            this.butonGuncelle.TabIndex = 1;
            this.butonGuncelle.Text = "Güncelle";
            this.butonGuncelle.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.butonGuncelle.TextImageRelation = System.Windows.Forms.TextImageRelation.ImageBeforeText;
            this.butonGuncelle.UseVisualStyleBackColor = true;
            this.butonGuncelle.Click += new System.EventHandler(this.butonGuncelle_Click);
            // 
            // butonAra
            // 
            this.butonAra.Dock = System.Windows.Forms.DockStyle.Top;
            this.butonAra.FlatAppearance.BorderSize = 0;
            this.butonAra.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.butonAra.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.butonAra.ForeColor = System.Drawing.Color.Black;
            this.butonAra.Image = ((System.Drawing.Image)(resources.GetObject("butonAra.Image")));
            this.butonAra.ImageAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.butonAra.Location = new System.Drawing.Point(0, 200);
            this.butonAra.Name = "butonAra";
            this.butonAra.Padding = new System.Windows.Forms.Padding(12);
            this.butonAra.Size = new System.Drawing.Size(220, 60);
            this.butonAra.TabIndex = 2;
            this.butonAra.Text = "Ara";
            this.butonAra.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            this.butonAra.TextImageRelation = System.Windows.Forms.TextImageRelation.ImageBeforeText;
            this.butonAra.UseVisualStyleBackColor = true;
            this.butonAra.Click += new System.EventHandler(this.butonAra_Click);
            // 
            // panelBaslik
            // 
            this.panelBaslik.BackColor = System.Drawing.Color.DarkOrange;
            this.panelBaslik.Controls.Add(this.butonMinimize);
            this.panelBaslik.Controls.Add(this.butonMaksimize);
            this.panelBaslik.Controls.Add(this.butonKapat);
            this.panelBaslik.Controls.Add(this.butonCocukFormKapat);
            this.panelBaslik.Controls.Add(this.lblBaslik);
            this.panelBaslik.Dock = System.Windows.Forms.DockStyle.Top;
            this.panelBaslik.Location = new System.Drawing.Point(220, 0);
            this.panelBaslik.Name = "panelBaslik";
            this.panelBaslik.Size = new System.Drawing.Size(858, 80);
            this.panelBaslik.TabIndex = 3;
            this.panelBaslik.MouseDown += new System.Windows.Forms.MouseEventHandler(this.panelBaslik_MouseDown);
            // 
            // lblBaslik
            // 
            this.lblBaslik.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.lblBaslik.AutoSize = true;
            this.lblBaslik.Font = new System.Drawing.Font("Century Gothic", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.lblBaslik.Location = new System.Drawing.Point(357, 28);
            this.lblBaslik.Name = "lblBaslik";
            this.lblBaslik.Size = new System.Drawing.Size(114, 24);
            this.lblBaslik.TabIndex = 4;
            this.lblBaslik.Text = "Ana Sayfa";
            // 
            // label1
            // 
            this.label1.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Century Gothic", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.label1.Location = new System.Drawing.Point(12, 28);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(165, 24);
            this.label1.TabIndex = 5;
            this.label1.Text = "Mustafa Yılmaz";
            // 
            // panelGoruntu
            // 
            this.panelGoruntu.Controls.Add(this.pictureBox1);
            this.panelGoruntu.Dock = System.Windows.Forms.DockStyle.Fill;
            this.panelGoruntu.Location = new System.Drawing.Point(220, 80);
            this.panelGoruntu.Name = "panelGoruntu";
            this.panelGoruntu.Size = new System.Drawing.Size(858, 638);
            this.panelGoruntu.TabIndex = 4;
            // 
            // butonCocukFormKapat
            // 
            this.butonCocukFormKapat.Dock = System.Windows.Forms.DockStyle.Left;
            this.butonCocukFormKapat.FlatAppearance.BorderSize = 0;
            this.butonCocukFormKapat.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.butonCocukFormKapat.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.butonCocukFormKapat.Location = new System.Drawing.Point(0, 0);
            this.butonCocukFormKapat.Name = "butonCocukFormKapat";
            this.butonCocukFormKapat.Size = new System.Drawing.Size(18, 80);
            this.butonCocukFormKapat.TabIndex = 0;
            this.butonCocukFormKapat.Text = "X";
            this.butonCocukFormKapat.UseVisualStyleBackColor = true;
            this.butonCocukFormKapat.Click += new System.EventHandler(this.butonCocukFormKapat_Click);
            // 
            // pictureBox1
            // 
            this.pictureBox1.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(18, 191);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(822, 241);
            this.pictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.AutoSize;
            this.pictureBox1.TabIndex = 0;
            this.pictureBox1.TabStop = false;
            // 
            // butonKapat
            // 
            this.butonKapat.Dock = System.Windows.Forms.DockStyle.Right;
            this.butonKapat.FlatAppearance.BorderSize = 0;
            this.butonKapat.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.butonKapat.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.butonKapat.ForeColor = System.Drawing.Color.White;
            this.butonKapat.Location = new System.Drawing.Point(808, 0);
            this.butonKapat.Name = "butonKapat";
            this.butonKapat.Size = new System.Drawing.Size(50, 80);
            this.butonKapat.TabIndex = 5;
            this.butonKapat.Text = "O";
            this.butonKapat.UseVisualStyleBackColor = true;
            this.butonKapat.Click += new System.EventHandler(this.butonKapat_Click);
            // 
            // butonMaksimize
            // 
            this.butonMaksimize.Dock = System.Windows.Forms.DockStyle.Right;
            this.butonMaksimize.FlatAppearance.BorderSize = 0;
            this.butonMaksimize.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.butonMaksimize.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.butonMaksimize.ForeColor = System.Drawing.Color.White;
            this.butonMaksimize.Location = new System.Drawing.Point(758, 0);
            this.butonMaksimize.Name = "butonMaksimize";
            this.butonMaksimize.Size = new System.Drawing.Size(50, 80);
            this.butonMaksimize.TabIndex = 6;
            this.butonMaksimize.Text = "O";
            this.butonMaksimize.UseVisualStyleBackColor = true;
            this.butonMaksimize.Click += new System.EventHandler(this.butonMaksimize_Click);
            // 
            // butonMinimize
            // 
            this.butonMinimize.Dock = System.Windows.Forms.DockStyle.Right;
            this.butonMinimize.FlatAppearance.BorderSize = 0;
            this.butonMinimize.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.butonMinimize.Font = new System.Drawing.Font("Microsoft Sans Serif", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.butonMinimize.ForeColor = System.Drawing.Color.White;
            this.butonMinimize.Location = new System.Drawing.Point(708, 0);
            this.butonMinimize.Name = "butonMinimize";
            this.butonMinimize.Size = new System.Drawing.Size(50, 80);
            this.butonMinimize.TabIndex = 7;
            this.butonMinimize.Text = "O";
            this.butonMinimize.UseVisualStyleBackColor = true;
            this.butonMinimize.Click += new System.EventHandler(this.butonMinimize_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1078, 718);
            this.ControlBox = false;
            this.Controls.Add(this.panelGoruntu);
            this.Controls.Add(this.panelBaslik);
            this.Controls.Add(this.panelMenu);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.MinimumSize = new System.Drawing.Size(1060, 666);
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.panelMenu.ResumeLayout(false);
            this.panelLogo.ResumeLayout(false);
            this.panelLogo.PerformLayout();
            this.panelBaslik.ResumeLayout(false);
            this.panelBaslik.PerformLayout();
            this.panelGoruntu.ResumeLayout(false);
            this.panelGoruntu.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel panelMenu;
        private System.Windows.Forms.Button butonAra;
        private System.Windows.Forms.Button butonGuncelle;
        private System.Windows.Forms.Button butonEkle;
        private System.Windows.Forms.Panel panelLogo;
        private System.Windows.Forms.Panel panelBaslik;
        private System.Windows.Forms.Label lblBaslik;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Panel panelGoruntu;
        private System.Windows.Forms.Button butonCocukFormKapat;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Button butonMinimize;
        private System.Windows.Forms.Button butonMaksimize;
        private System.Windows.Forms.Button butonKapat;
    }
}

