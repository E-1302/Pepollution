#pragma once
#include "Controladora.h"
#include "FormNivel1.h"
#include "FormNivel2.h"

namespace Pepollution {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Graphics^ gr;
		BufferedGraphicsContext^ bgc;
		BufferedGraphics^ bg;

		int alto, ancho;

		Bitmap^ imgfondomenu;
		Bitmap^ imgnivelmenu;
		Bitmap^ imgreglas;
	private: System::Windows::Forms::Button^ boton_jugar;
	private: System::Windows::Forms::Button^ boton_reglas;

	private: System::Windows::Forms::Button^ boton_salir;
	private: System::Windows::Forms::Button^ boton_regresar;
	private: System::Windows::Forms::Button^ boton_n1;
	private: System::Windows::Forms::Button^ boton_n2;
	private: System::Windows::Forms::Button^ boton_r1;
	private: System::Windows::Forms::Button^ boton_r2;
	private: System::Windows::Forms::TextBox^ textBox_nickname;
	private: System::Windows::Forms::Button^ boton_cerrar;
	private: System::Windows::Forms::Label^ label_r;





	private: System::Windows::Forms::Timer^ timer1;


	public:
		MyForm(void)
		{
			InitializeComponent();
			gr = this->CreateGraphics();
			bgc = BufferedGraphicsManager::Current;
			bg = bgc->Allocate(gr, this->ClientRectangle);
			bg->Graphics->Clear(Color::White);

			ancho = (int)gr->VisibleClipBounds.Width;
			alto = (int)gr->VisibleClipBounds.Height;

			imgfondomenu = gcnew Bitmap("fondo-menu.png");
			imgnivelmenu = gcnew Bitmap("fondo-nivel.png");
			imgreglas = gcnew Bitmap("fondo-reglas.png");
		}

	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:



#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->boton_jugar = (gcnew System::Windows::Forms::Button());
			this->boton_reglas = (gcnew System::Windows::Forms::Button());
			this->boton_salir = (gcnew System::Windows::Forms::Button());
			this->boton_regresar = (gcnew System::Windows::Forms::Button());
			this->boton_n1 = (gcnew System::Windows::Forms::Button());
			this->boton_n2 = (gcnew System::Windows::Forms::Button());
			this->boton_r1 = (gcnew System::Windows::Forms::Button());
			this->boton_r2 = (gcnew System::Windows::Forms::Button());
			this->textBox_nickname = (gcnew System::Windows::Forms::TextBox());
			this->boton_cerrar = (gcnew System::Windows::Forms::Button());
			this->label_r = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// boton_jugar
			// 
			this->boton_jugar->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->boton_jugar->Font = (gcnew System::Drawing::Font(L"Mistral", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_jugar->Location = System::Drawing::Point(124, 389);
			this->boton_jugar->Name = L"boton_jugar";
			this->boton_jugar->Size = System::Drawing::Size(157, 94);
			this->boton_jugar->TabIndex = 0;
			this->boton_jugar->Text = L"JUGAR";
			this->boton_jugar->UseVisualStyleBackColor = false;
			this->boton_jugar->Click += gcnew System::EventHandler(this, &MyForm::jugar_Click);
			// 
			// boton_reglas
			// 
			this->boton_reglas->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->boton_reglas->Font = (gcnew System::Drawing::Font(L"Mistral", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_reglas->Location = System::Drawing::Point(419, 389);
			this->boton_reglas->Name = L"boton_reglas";
			this->boton_reglas->Size = System::Drawing::Size(157, 94);
			this->boton_reglas->TabIndex = 1;
			this->boton_reglas->Text = L"REGLAS";
			this->boton_reglas->UseVisualStyleBackColor = false;
			this->boton_reglas->Click += gcnew System::EventHandler(this, &MyForm::boton_reglas_Click);
			// 
			// boton_salir
			// 
			this->boton_salir->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->boton_salir->Font = (gcnew System::Drawing::Font(L"Mistral", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_salir->Location = System::Drawing::Point(706, 389);
			this->boton_salir->Name = L"boton_salir";
			this->boton_salir->Size = System::Drawing::Size(157, 94);
			this->boton_salir->TabIndex = 2;
			this->boton_salir->Text = L"SALIR";
			this->boton_salir->UseVisualStyleBackColor = false;
			this->boton_salir->Click += gcnew System::EventHandler(this, &MyForm::boton_salir_Click);
			// 
			// boton_regresar
			// 
			this->boton_regresar->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->boton_regresar->Font = (gcnew System::Drawing::Font(L"Mistral", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_regresar->Location = System::Drawing::Point(12, 12);
			this->boton_regresar->Name = L"boton_regresar";
			this->boton_regresar->Size = System::Drawing::Size(101, 41);
			this->boton_regresar->TabIndex = 3;
			this->boton_regresar->Text = L"VOLVER";
			this->boton_regresar->UseVisualStyleBackColor = false;
			this->boton_regresar->Visible = false;
			this->boton_regresar->Click += gcnew System::EventHandler(this, &MyForm::boton_regresar_Click);
			// 
			// boton_n1
			// 
			this->boton_n1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->boton_n1->Font = (gcnew System::Drawing::Font(L"Mistral", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_n1->Location = System::Drawing::Point(265, 244);
			this->boton_n1->Name = L"boton_n1";
			this->boton_n1->Size = System::Drawing::Size(157, 94);
			this->boton_n1->TabIndex = 4;
			this->boton_n1->Text = L"NIVEL 1";
			this->boton_n1->UseVisualStyleBackColor = false;
			this->boton_n1->Visible = false;
			this->boton_n1->Click += gcnew System::EventHandler(this, &MyForm::boton_n1_Click);
			// 
			// boton_n2
			// 
			this->boton_n2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->boton_n2->Font = (gcnew System::Drawing::Font(L"Mistral", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_n2->Location = System::Drawing::Point(564, 244);
			this->boton_n2->Name = L"boton_n2";
			this->boton_n2->Size = System::Drawing::Size(157, 94);
			this->boton_n2->TabIndex = 5;
			this->boton_n2->Text = L"NIVEL 2";
			this->boton_n2->UseVisualStyleBackColor = false;
			this->boton_n2->Visible = false;
			this->boton_n2->Click += gcnew System::EventHandler(this, &MyForm::boton_n2_Click);
			// 
			// boton_r1
			// 
			this->boton_r1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->boton_r1->Font = (gcnew System::Drawing::Font(L"Mistral", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_r1->Location = System::Drawing::Point(265, 377);
			this->boton_r1->Name = L"boton_r1";
			this->boton_r1->Size = System::Drawing::Size(157, 94);
			this->boton_r1->TabIndex = 6;
			this->boton_r1->Text = L"RANKING 1";
			this->boton_r1->UseVisualStyleBackColor = false;
			this->boton_r1->Visible = false;
			this->boton_r1->Click += gcnew System::EventHandler(this, &MyForm::boton_r1_Click);
			// 
			// boton_r2
			// 
			this->boton_r2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->boton_r2->Font = (gcnew System::Drawing::Font(L"Mistral", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_r2->Location = System::Drawing::Point(564, 377);
			this->boton_r2->Name = L"boton_r2";
			this->boton_r2->Size = System::Drawing::Size(157, 94);
			this->boton_r2->TabIndex = 7;
			this->boton_r2->Text = L"RANKING 2";
			this->boton_r2->UseVisualStyleBackColor = false;
			this->boton_r2->Visible = false;
			this->boton_r2->Click += gcnew System::EventHandler(this, &MyForm::boton_r2_Click);
			// 
			// textBox_nickname
			// 
			this->textBox_nickname->AcceptsReturn = true;
			this->textBox_nickname->AcceptsTab = true;
			this->textBox_nickname->BackColor = System::Drawing::Color::White;
			this->textBox_nickname->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_nickname->Location = System::Drawing::Point(498, 185);
			this->textBox_nickname->Name = L"textBox_nickname";
			this->textBox_nickname->Size = System::Drawing::Size(291, 34);
			this->textBox_nickname->TabIndex = 8;
			this->textBox_nickname->UseWaitCursor = true;
			this->textBox_nickname->Visible = false;
			// 
			// boton_cerrar
			// 
			this->boton_cerrar->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->boton_cerrar->Font = (gcnew System::Drawing::Font(L"Mistral", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_cerrar->Location = System::Drawing::Point(601, 95);
			this->boton_cerrar->Name = L"boton_cerrar";
			this->boton_cerrar->Size = System::Drawing::Size(75, 26);
			this->boton_cerrar->TabIndex = 9;
			this->boton_cerrar->Text = L"CERRAR";
			this->boton_cerrar->UseVisualStyleBackColor = false;
			this->boton_cerrar->Visible = false;
			this->boton_cerrar->Click += gcnew System::EventHandler(this, &MyForm::boton_cerrar_Click);
			// 
			// label_r
			// 
			this->label_r->BackColor = System::Drawing::Color::Orange;
			this->label_r->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_r->Location = System::Drawing::Point(336, 124);
			this->label_r->Name = L"label_r";
			this->label_r->Padding = System::Windows::Forms::Padding(20, 10, 10, 10);
			this->label_r->Size = System::Drawing::Size(340, 400);
			this->label_r->TabIndex = 10;
			this->label_r->Text = L" ";
			this->label_r->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 561);
			this->ControlBox = false;
			this->Controls->Add(this->boton_cerrar);
			this->Controls->Add(this->label_r);
			this->Controls->Add(this->textBox_nickname);
			this->Controls->Add(this->boton_r2);
			this->Controls->Add(this->boton_r1);
			this->Controls->Add(this->boton_n2);
			this->Controls->Add(this->boton_n1);
			this->Controls->Add(this->boton_regresar);
			this->Controls->Add(this->boton_salir);
			this->Controls->Add(this->boton_reglas);
			this->Controls->Add(this->boton_jugar);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pepollution-menu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

		bg->Graphics->DrawImage(imgfondomenu, 0, 0, ancho, alto);

		bg->Render(gr);
	}

	private: System::Void jugar_Click(System::Object^ sender, System::EventArgs^ e) {
		//Controladora* nivel1 = new Controladora();
		//FormNivel1^ Frmnivel1 = gcnew FormNivel1(nivel1); //le pasamos el juego
		//this->Visible = false;

		//Frmnivel1->ShowDialog();


		//delete Frmnivel1;

		timer1->Enabled = false;
		boton_regresar->Visible = true;
		boton_jugar->Visible = false;
		boton_reglas->Visible = false;
		boton_salir->Visible = false;
		boton_n1->Visible = true;
		boton_n2->Visible = true;
		boton_r1->Visible = true;
		boton_r2->Visible = true;
		textBox_nickname->Visible = true;

		bg->Graphics->DrawImage(imgnivelmenu, 0, 0, ancho, alto);
		bg->Render(gr);
	}
	private: System::Void boton_salir_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = false;
		Application::Exit();
	}
	private: System::Void boton_reglas_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = false;
		boton_regresar->Visible = true;
		boton_jugar->Visible = false;
		boton_reglas->Visible = false;
		boton_salir->Visible = false;

		bg->Graphics->DrawImage(imgreglas, 0, 0, ancho, alto);
		bg->Render(gr);
	}

	private: System::Void boton_regresar_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = true;
		boton_regresar->Visible = false;
		boton_jugar->Visible = true;
		boton_reglas->Visible = true;
		boton_salir->Visible = true;
		boton_n1->Visible = false;
		boton_n2->Visible = false;
		boton_r1->Visible = false;
		boton_r2->Visible = false;
		textBox_nickname->Visible = false;

		bg->Graphics->DrawImage(imgfondomenu, 0, 0, ancho, alto);
		bg->Render(gr);
	}
	private: System::Void boton_n1_Click(System::Object^ sender, System::EventArgs^ e) {
		Controladora* nivel1 = new Controladora();
		FormNivel1^ Frmnivel1 = gcnew FormNivel1(nivel1); //le pasamos el juego
		this->Visible = true;

		Frmnivel1->ShowDialog();


		delete Frmnivel1;
	}

	private: System::Void boton_n2_Click(System::Object^ sender, System::EventArgs^ e) {
		Controladora* nivel2 = new Controladora();
		FormNivel2^ Frmnivel2 = gcnew FormNivel2(nivel2); //le pasamos el juego
		this->Visible = true;

		Frmnivel2->ShowDialog();


		delete Frmnivel2;
	}
	private: System::Void boton_r1_Click(System::Object^ sender, System::EventArgs^ e) {
		label_r->Visible = true;
		boton_cerrar->Visible = true;
		textBox_nickname->Visible = false;
		boton_regresar->Visible = false;
		boton_n1->Visible = false;
		boton_n2->Visible = false;
		boton_r1->Visible = false;
		boton_r2->Visible = false;
		bg->Graphics->DrawImage(imgnivelmenu, 0, 0, ancho, alto);
		bg->Render(gr);
	}
	private: System::Void boton_r2_Click(System::Object^ sender, System::EventArgs^ e) {
		label_r->Visible = true;
		boton_cerrar->Visible = true;
		textBox_nickname->Visible = false;
		boton_regresar->Visible = false;
		boton_n1->Visible = false;
		boton_n2->Visible = false;
		boton_r1->Visible = false;
		boton_r2->Visible = false;
		bg->Graphics->DrawImage(imgnivelmenu, 0, 0, ancho, alto);
		bg->Render(gr);
	}
	private: System::Void boton_cerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		label_r->Visible = false;
		boton_cerrar->Visible = false;
		textBox_nickname->Visible = true;
		boton_regresar->Visible = true;
		boton_n1->Visible = true;
		boton_n2->Visible = true;
		boton_r1->Visible = true;
		boton_r2->Visible = true;
		bg->Graphics->DrawImage(imgnivelmenu, 0, 0, ancho, alto);
		bg->Render(gr);
	}
};
}

