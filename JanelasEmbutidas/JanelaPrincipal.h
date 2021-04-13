#include "Janela2.h"
#include "Janela3.h"
#pragma once

namespace JanelasEmbutidas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para JanelaPrincipal
	/// </summary>
	public ref class JanelaPrincipal : public System::Windows::Forms::Form
	{
	public:
		JanelaPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~JanelaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ arquivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sairToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ janelasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ janela2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ janela3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;

	protected:

	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(JanelaPrincipal::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->arquivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sairToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->janelasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->janela2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->janela3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->arquivoToolStripMenuItem,
					this->janelasToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(684, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// arquivoToolStripMenuItem
			// 
			this->arquivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->sairToolStripMenuItem });
			this->arquivoToolStripMenuItem->Name = L"arquivoToolStripMenuItem";
			this->arquivoToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->arquivoToolStripMenuItem->Text = L"Arquivo";
			// 
			// sairToolStripMenuItem
			// 
			this->sairToolStripMenuItem->Name = L"sairToolStripMenuItem";
			this->sairToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->sairToolStripMenuItem->Text = L"Sair";
			this->sairToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::sairToolStripMenuItem_Click);
			// 
			// janelasToolStripMenuItem
			// 
			this->janelasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->janela2ToolStripMenuItem,
					this->janela3ToolStripMenuItem
			});
			this->janelasToolStripMenuItem->Name = L"janelasToolStripMenuItem";
			this->janelasToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->janelasToolStripMenuItem->Text = L"Janelas";
			// 
			// janela2ToolStripMenuItem
			// 
			this->janela2ToolStripMenuItem->Name = L"janela2ToolStripMenuItem";
			this->janela2ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->janela2ToolStripMenuItem->Text = L"Janela 2";
			this->janela2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::toolStripButton1_Click);
			// 
			// janela3ToolStripMenuItem
			// 
			this->janela3ToolStripMenuItem->Name = L"janela3ToolStripMenuItem";
			this->janela3ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->janela3ToolStripMenuItem->Text = L"Janela 3";
			this->janela3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &JanelaPrincipal::toolStripButton2_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton1,
					this->toolStripButton2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(684, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &JanelaPrincipal::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &JanelaPrincipal::toolStripButton2_Click);
			// 
			// JanelaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 487);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"JanelaPrincipal";
			this->Text = L"JanelaPrincipal";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e){
		Janela2^ j2 = gcnew Janela2();
		j2->MdiParent = this;
		j2->Show();
	}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	Janela3^ j3 = gcnew Janela3();
	j3->MdiParent = this;
	j3->Show();
}
private: System::Void sairToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
