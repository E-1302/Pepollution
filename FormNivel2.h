#pragma once
#include "Controladora.h"

namespace Pepollution {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de FormNivel2
	/// </summary>
	public ref class FormNivel2 : public System::Windows::Forms::Form
	{
	public:
		FormNivel2(Controladora* n2)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->n2 = n2;
			imgtortuga = gcnew Bitmap("tortuga.png");
			imgpezrojo = gcnew Bitmap("pezrojo.png");
			imgpezverde = gcnew Bitmap("pezverde.png");
			imgtanque = gcnew Bitmap("tanqueoxygeno.png");
			imgfondo2 = gcnew Bitmap("fondonivel2.png");
			imgbuzo = gcnew Bitmap("buzo.png");
			imgbidon = gcnew Bitmap("bidon.png");
			imggasolina = gcnew Bitmap("gasolina.png");
			imgjugo = gcnew Bitmap("jugo.png");
			imglata1 = gcnew Bitmap("lata1.png");
			imglata2 = gcnew Bitmap("lata2.png");
			imgspray = gcnew Bitmap("spray.png");

			imgganaste2 = gcnew Bitmap("ganaste_n2.png");
			imgperdiste2 = gcnew Bitmap("perdiste_n2.png");

			temp = 80000;
			conttanque = 0;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FormNivel2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:

		Controladora* n2;

		Bitmap^ imgpezrojo;
		Bitmap^ imgpezverde;
		Bitmap^ imgtortuga;
		Bitmap^ imgtanque;
		Bitmap^ imgfondo2;
		Bitmap^ imgbuzo;
		Bitmap^ imgbidon;
		Bitmap^ imggasolina;
		Bitmap^ imgjugo;
		Bitmap^ imglata1;
		Bitmap^ imglata2;
		Bitmap^ imgspray;

		Bitmap^ imgganaste2;
		Bitmap^ imgperdiste2;

		double temp;
		int conttanque;
	private: System::Windows::Forms::Timer^ timerTortuga;
	private: System::Windows::Forms::Timer^ timerpezrojo;
	private: System::Windows::Forms::Timer^ timerpezverde;
	private: System::Windows::Forms::Timer^ timertanque;
	private: System::Windows::Forms::Timer^ timerbidon;
	private: System::Windows::Forms::Timer^ timerjugo;
	private: System::Windows::Forms::Timer^ timergasolina;
	private: System::Windows::Forms::Timer^ timerlat;
	private: System::Windows::Forms::Timer^ timerlata;
	private: System::Windows::Forms::Timer^ timersprite;
	private: System::Windows::Forms::Timer^ timertanqueg;
	private: System::Windows::Forms::Button^ boton_terminar;


	private: System::Windows::Forms::Timer^ timernivel2;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timernivel2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerTortuga = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerpezrojo = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerpezverde = (gcnew System::Windows::Forms::Timer(this->components));
			this->timertanque = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerbidon = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerjugo = (gcnew System::Windows::Forms::Timer(this->components));
			this->timergasolina = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerlat = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerlata = (gcnew System::Windows::Forms::Timer(this->components));
			this->timersprite = (gcnew System::Windows::Forms::Timer(this->components));
			this->timertanqueg = (gcnew System::Windows::Forms::Timer(this->components));
			this->boton_terminar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// timernivel2
			// 
			this->timernivel2->Enabled = true;
			this->timernivel2->Tick += gcnew System::EventHandler(this, &FormNivel2::timernivel2_Tick);
			// 
			// timerTortuga
			// 
			this->timerTortuga->Enabled = true;
			this->timerTortuga->Interval = 12000;
			this->timerTortuga->Tick += gcnew System::EventHandler(this, &FormNivel2::timerTortuga_Tick);
			// 
			// timerpezrojo
			// 
			this->timerpezrojo->Enabled = true;
			this->timerpezrojo->Interval = 10000;
			this->timerpezrojo->Tick += gcnew System::EventHandler(this, &FormNivel2::timerpezrojo_Tick);
			// 
			// timerpezverde
			// 
			this->timerpezverde->Enabled = true;
			this->timerpezverde->Interval = 8000;
			this->timerpezverde->Tick += gcnew System::EventHandler(this, &FormNivel2::timerpezverde_Tick);
			// 
			// timertanque
			// 
			this->timertanque->Enabled = true;
			this->timertanque->Interval = 25000;
			this->timertanque->Tick += gcnew System::EventHandler(this, &FormNivel2::timertanque_Tick);
			// 
			// timerbidon
			// 
			this->timerbidon->Enabled = true;
			this->timerbidon->Interval = 10000;
			this->timerbidon->Tick += gcnew System::EventHandler(this, &FormNivel2::timerbidon_Tick);
			// 
			// timerjugo
			// 
			this->timerjugo->Enabled = true;
			this->timerjugo->Interval = 4000;
			this->timerjugo->Tick += gcnew System::EventHandler(this, &FormNivel2::timerjugo_Tick);
			// 
			// timerlat
			// 
			this->timerlat->Enabled = true;
			this->timerlat->Interval = 6000;
			this->timerlat->Tick += gcnew System::EventHandler(this, &FormNivel2::timerlat_Tick);
			// 
			// timerlata
			// 
			this->timerlata->Enabled = true;
			this->timerlata->Interval = 6000;
			this->timerlata->Tick += gcnew System::EventHandler(this, &FormNivel2::timerlata_Tick);
			// 
			// timersprite
			// 
			this->timersprite->Enabled = true;
			this->timersprite->Interval = 9000;
			this->timersprite->Tick += gcnew System::EventHandler(this, &FormNivel2::timersprite_Tick);
			// 
			// timertanqueg
			// 
			this->timertanqueg->Enabled = true;
			this->timertanqueg->Interval = 5000;
			this->timertanqueg->Tick += gcnew System::EventHandler(this, &FormNivel2::timertanqueg_Tick);
			// 
			// boton_terminar
			// 
			this->boton_terminar->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->boton_terminar->Font = (gcnew System::Drawing::Font(L"Mistral", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton_terminar->Location = System::Drawing::Point(330, 412);
			this->boton_terminar->Name = L"boton_terminar";
			this->boton_terminar->Size = System::Drawing::Size(276, 94);
			this->boton_terminar->TabIndex = 5;
			this->boton_terminar->Text = L"TERMINAR PARTIDA";
			this->boton_terminar->UseVisualStyleBackColor = false;
			this->boton_terminar->Visible = false;
			// 
			// FormNivel2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1000, 600);
			this->ControlBox = false;
			this->Controls->Add(this->boton_terminar);
			this->Name = L"FormNivel2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pepollution - Nivel2";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormNivel2::FormNivel2_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &FormNivel2::FormNivel2_KeyUp);
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void timernivel2_Tick(System::Object^ sender, System::EventArgs^ e) {
			int ancho, alto;


			Graphics^ g = this->CreateGraphics();
			BufferedGraphicsContext^ espacio = BufferedGraphicsManager::Current;
			BufferedGraphics^ buffer = espacio->Allocate(g, this->ClientRectangle);

			ancho = (int)g->VisibleClipBounds.Width;
			alto = (int)g->VisibleClipBounds.Height;

			buffer->Graphics->DrawImage(imgfondo2, 0, 0, ancho, alto); //pongon fondo 2 

			buffer->Graphics->DrawString("PUNTOS: " + n2->getbuzo()->getPuntos(), gcnew Drawing::Font("Goudy Stout", 12), Brushes::White, 750, 55);
			buffer->Graphics->DrawString("TIEMPO: " + n2->getcrono() + "/" + temp / 1000, gcnew Drawing::Font("Goudy Stout", 11), Brushes::White, 750, 75);

			if (n2->gettempextra() == true) {
				temp += 5000;
				n2->settempextra(false);
			}
			n2->Colisionconbuzo();
			n2->Colisionconform();
			n2->colision_tanque();
			n2->moverbasura(buffer, imgbidon, imglata1, imglata2, imggasolina, imgspray, imgjugo);
			n2->MoverTodo(buffer, imgpezrojo, imgpezverde, imgtortuga, imgtanque, imgbuzo);


			buffer->Render(g);

			delete buffer;
			delete espacio;
			delete g;

			if (n2->ganar_nivel2() == true) {
				this->timernivel2->Enabled = false;
				MessageBox::Show("GANASTE EL SEGUNDO NIVEL" + "\n" +
					"Puntos del segundo nivel: " + n2->getbuzo()->getPuntos() + "\n");
				this->Close();
			}

			if (this->timernivel2->Interval == temp) {
				this->timernivel2->Enabled = false;
				if (n2->ganar_nivel2() == false) {
					MessageBox::Show("SE ACABO EL TIEMPO" + "\n" +
						"PERDISTE EL SEGUNDO NIVEL" + "\n" +
						"Puntos del segundo nivel: " + n2->getbuzo()->getPuntos() + "\n");
				}
				this->Close();
			}
		}
		private: System::Void timerTortuga_Tick(System::Object^ sender, System::EventArgs^ e) {
			n2->Agregartortuga();
		}
		private: System::Void timerpezrojo_Tick(System::Object^ sender, System::EventArgs^ e) {
			n2->Agregarpezrojo();
		}
		private: System::Void timerpezverde_Tick(System::Object^ sender, System::EventArgs^ e) {
			n2->Agregarpezverde();
		}
		private: System::Void timertanque_Tick(System::Object^ sender, System::EventArgs^ e) {
			if (conttanque < 5) {
				n2->Agregartanque();
				conttanque++;
			}
			else this->timertanque->Enabled = false;
		}
		private: System::Void timerbidon_Tick(System::Object^ sender, System::EventArgs^ e) {
			n2->Agregarbidon();
		}
		private: System::Void timerjugo_Tick(System::Object^ sender, System::EventArgs^ e) {
			n2->Agregarjugo();
		}
		private: System::Void timerlat_Tick(System::Object^ sender, System::EventArgs^ e) {
			n2->Agregarlata1();
		}
		private: System::Void timerlata_Tick(System::Object^ sender, System::EventArgs^ e) {
			n2->Agregarlata2();
		}
		private: System::Void timersprite_Tick(System::Object^ sender, System::EventArgs^ e) {
			n2->Agregarspray();
		}
		private: System::Void timertanqueg_Tick(System::Object^ sender, System::EventArgs^ e) {
			n2->Agregargasolina();
		}

		private: System::Void FormNivel2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			switch (e->KeyCode) {
			case Keys::Up:
				n2->getbuzo()->direccion = Direcciones::Arriba;
				break;
			case Keys::Down:
				n2->getbuzo()->direccion = Direcciones::Abajo;
				break;
			case Keys::Right:
				n2->getbuzo()->direccion = Direcciones::Derecha;
				break;
			case Keys::Left:
				n2->getbuzo()->direccion = Direcciones::Izquierda;
				break;
			}
		}

		private: System::Void FormNivel2_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			n2->getbuzo()->direccion = Direcciones::Ninguna;
		}
	};
}
