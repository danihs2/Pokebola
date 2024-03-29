#pragma once
#include "Pokemon.h"
#include <msclr/marshal_cppstd.h>
#include <string>

namespace Pokebola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Pokemon** pokemones;
		Pokemon* pk_oponente;
		int pkMax = 5;
		int nPks = 0;
		int pkActual = -1;
		string** nombres = new string*[pkMax];
	private: System::Windows::Forms::Label^ lb_pk_info3;
	public:
	private: System::Windows::Forms::Label^ lb_pk_info2;
		   int ipk_oponente = -1;

	public:

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_contenido;
	protected:
	private: System::Windows::Forms::Panel^ panel_inicio;
	private: System::Windows::Forms::Button^ btn_start;
	private: System::Windows::Forms::Panel^ panel_menu;
	private: System::Windows::Forms::Panel^ panel_crear;


	private: System::Windows::Forms::Label^ lb_crear;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ nud_fuerza;

	private: System::Windows::Forms::ComboBox^ cb_tipo;

	private: System::Windows::Forms::NumericUpDown^ nup_vida;

	private: System::Windows::Forms::TextBox^ tb_nom;

	private: System::Windows::Forms::Button^ btn_cazar;
	private: System::Windows::Forms::Button^ btn_crear;
	private: System::Windows::Forms::Label^ lb_pk_info;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel_batalla;



	private: System::Windows::Forms::Panel^ panel_controls;














	private: System::Windows::Forms::Button^ btn_huir;
	private: System::Windows::Forms::Button^ btn_curar;
	private: System::Windows::Forms::Button^ btn_ataque;
	private: System::Windows::Forms::Panel^ panel_seleccion;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ cb_pokemones;
	private: System::Windows::Forms::Panel^ panel_pokemones;



	private: System::Windows::Forms::PictureBox^ pb_pk_b;
	private: System::Windows::Forms::PictureBox^ pb_pk_a;
	private: System::Windows::Forms::Panel^ panel_stats;
	private: System::Windows::Forms::Label^ lb_fuerza_a;
	private: System::Windows::Forms::Label^ lb_tipo_a;
	private: System::Windows::Forms::Label^ lb_vida_a;
	private: System::Windows::Forms::Label^ lb_nombre_a;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ lb_fuerza_b;
	private: System::Windows::Forms::Label^ lb_tipo_b;
	private: System::Windows::Forms::Label^ lb_vida_b;
	private: System::Windows::Forms::Label^ lb_nombre_b;
	private: System::Windows::Forms::Label^ lb_1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel_contenido = (gcnew System::Windows::Forms::Panel());
			this->panel_menu = (gcnew System::Windows::Forms::Panel());
			this->panel_crear = (gcnew System::Windows::Forms::Panel());
			this->btn_crear = (gcnew System::Windows::Forms::Button());
			this->nud_fuerza = (gcnew System::Windows::Forms::NumericUpDown());
			this->cb_tipo = (gcnew System::Windows::Forms::ComboBox());
			this->nup_vida = (gcnew System::Windows::Forms::NumericUpDown());
			this->tb_nom = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb_crear = (gcnew System::Windows::Forms::Label());
			this->lb_pk_info = (gcnew System::Windows::Forms::Label());
			this->lb_pk_info3 = (gcnew System::Windows::Forms::Label());
			this->lb_pk_info2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_cazar = (gcnew System::Windows::Forms::Button());
			this->panel_inicio = (gcnew System::Windows::Forms::Panel());
			this->btn_start = (gcnew System::Windows::Forms::Button());
			this->panel_batalla = (gcnew System::Windows::Forms::Panel());
			this->panel_seleccion = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cb_pokemones = (gcnew System::Windows::Forms::ComboBox());
			this->panel_stats = (gcnew System::Windows::Forms::Panel());
			this->lb_fuerza_a = (gcnew System::Windows::Forms::Label());
			this->lb_tipo_a = (gcnew System::Windows::Forms::Label());
			this->lb_vida_a = (gcnew System::Windows::Forms::Label());
			this->lb_nombre_a = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lb_fuerza_b = (gcnew System::Windows::Forms::Label());
			this->lb_tipo_b = (gcnew System::Windows::Forms::Label());
			this->lb_vida_b = (gcnew System::Windows::Forms::Label());
			this->lb_nombre_b = (gcnew System::Windows::Forms::Label());
			this->lb_1 = (gcnew System::Windows::Forms::Label());
			this->panel_controls = (gcnew System::Windows::Forms::Panel());
			this->btn_huir = (gcnew System::Windows::Forms::Button());
			this->btn_curar = (gcnew System::Windows::Forms::Button());
			this->btn_ataque = (gcnew System::Windows::Forms::Button());
			this->panel_pokemones = (gcnew System::Windows::Forms::Panel());
			this->pb_pk_b = (gcnew System::Windows::Forms::PictureBox());
			this->pb_pk_a = (gcnew System::Windows::Forms::PictureBox());
			this->panel_contenido->SuspendLayout();
			this->panel_menu->SuspendLayout();
			this->panel_crear->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_fuerza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nup_vida))->BeginInit();
			this->panel_inicio->SuspendLayout();
			this->panel_batalla->SuspendLayout();
			this->panel_seleccion->SuspendLayout();
			this->panel_stats->SuspendLayout();
			this->panel_controls->SuspendLayout();
			this->panel_pokemones->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_pk_b))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_pk_a))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_contenido
			// 
			this->panel_contenido->Controls->Add(this->panel_menu);
			this->panel_contenido->Controls->Add(this->panel_inicio);
			this->panel_contenido->Controls->Add(this->panel_batalla);
			this->panel_contenido->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_contenido->Location = System::Drawing::Point(0, 0);
			this->panel_contenido->Name = L"panel_contenido";
			this->panel_contenido->Size = System::Drawing::Size(805, 412);
			this->panel_contenido->TabIndex = 0;
			// 
			// panel_menu
			// 
			this->panel_menu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_menu.BackgroundImage")));
			this->panel_menu->Controls->Add(this->panel_crear);
			this->panel_menu->Controls->Add(this->lb_pk_info);
			this->panel_menu->Controls->Add(this->lb_pk_info3);
			this->panel_menu->Controls->Add(this->lb_pk_info2);
			this->panel_menu->Controls->Add(this->label5);
			this->panel_menu->Controls->Add(this->btn_cazar);
			this->panel_menu->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_menu->Location = System::Drawing::Point(0, 0);
			this->panel_menu->Name = L"panel_menu";
			this->panel_menu->Size = System::Drawing::Size(805, 412);
			this->panel_menu->TabIndex = 1;
			this->panel_menu->Visible = false;
			// 
			// panel_crear
			// 
			this->panel_crear->Controls->Add(this->btn_crear);
			this->panel_crear->Controls->Add(this->nud_fuerza);
			this->panel_crear->Controls->Add(this->cb_tipo);
			this->panel_crear->Controls->Add(this->nup_vida);
			this->panel_crear->Controls->Add(this->tb_nom);
			this->panel_crear->Controls->Add(this->label4);
			this->panel_crear->Controls->Add(this->label3);
			this->panel_crear->Controls->Add(this->label2);
			this->panel_crear->Controls->Add(this->label1);
			this->panel_crear->Controls->Add(this->lb_crear);
			this->panel_crear->Location = System::Drawing::Point(41, 45);
			this->panel_crear->Name = L"panel_crear";
			this->panel_crear->Size = System::Drawing::Size(379, 336);
			this->panel_crear->TabIndex = 0;
			// 
			// btn_crear
			// 
			this->btn_crear->Location = System::Drawing::Point(132, 224);
			this->btn_crear->Name = L"btn_crear";
			this->btn_crear->Size = System::Drawing::Size(185, 23);
			this->btn_crear->TabIndex = 10;
			this->btn_crear->Text = L"Crear Pokemon";
			this->btn_crear->UseVisualStyleBackColor = true;
			this->btn_crear->Click += gcnew System::EventHandler(this, &MyForm::btn_crear_Click);
			// 
			// nud_fuerza
			// 
			this->nud_fuerza->Location = System::Drawing::Point(132, 177);
			this->nud_fuerza->Name = L"nud_fuerza";
			this->nud_fuerza->Size = System::Drawing::Size(185, 20);
			this->nud_fuerza->TabIndex = 9;
			// 
			// cb_tipo
			// 
			this->cb_tipo->FormattingEnabled = true;
			this->cb_tipo->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"NORMAL", L"HIELO", L"AGUA", L"FUEGO", L"DRAGON" });
			this->cb_tipo->Location = System::Drawing::Point(132, 147);
			this->cb_tipo->Name = L"cb_tipo";
			this->cb_tipo->Size = System::Drawing::Size(185, 21);
			this->cb_tipo->TabIndex = 8;
			// 
			// nup_vida
			// 
			this->nup_vida->Location = System::Drawing::Point(132, 114);
			this->nup_vida->Name = L"nup_vida";
			this->nup_vida->Size = System::Drawing::Size(185, 20);
			this->nup_vida->TabIndex = 7;
			// 
			// tb_nom
			// 
			this->tb_nom->Location = System::Drawing::Point(132, 87);
			this->tb_nom->Name = L"tb_nom";
			this->tb_nom->Size = System::Drawing::Size(185, 20);
			this->tb_nom->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 184);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Fuerza (1-3)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Tipo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Vida";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre";
			// 
			// lb_crear
			// 
			this->lb_crear->AutoSize = true;
			this->lb_crear->Location = System::Drawing::Point(113, 24);
			this->lb_crear->Name = L"lb_crear";
			this->lb_crear->Size = System::Drawing::Size(120, 13);
			this->lb_crear->TabIndex = 0;
			this->lb_crear->Text = L"Crea tu primer Pokemon";
			// 
			// lb_pk_info
			// 
			this->lb_pk_info->AutoSize = true;
			this->lb_pk_info->Location = System::Drawing::Point(3, 33);
			this->lb_pk_info->Name = L"lb_pk_info";
			this->lb_pk_info->Size = System::Drawing::Size(67, 143);
			this->lb_pk_info->TabIndex = 3;
			this->lb_pk_info->Text = L"Pokemon 1: \r\n-Nombre: \r\n-Vida: \r\n- Tipo: \r\n-Fuerza: \r\n\r\nPokemon 2:\r\n-Nombre: \r\n-V"
				L"ida: \r\n- Tipo: \r\n-Fuerza: \r\n";
			this->lb_pk_info->Visible = false;
			// 
			// lb_pk_info3
			// 
			this->lb_pk_info3->AutoSize = true;
			this->lb_pk_info3->Location = System::Drawing::Point(515, 312);
			this->lb_pk_info3->Name = L"lb_pk_info3";
			this->lb_pk_info3->Size = System::Drawing::Size(67, 143);
			this->lb_pk_info3->TabIndex = 5;
			this->lb_pk_info3->Text = L"Pokemon 5: \r\n-Nombre: \r\n-Vida: \r\n- Tipo: \r\n-Fuerza: \r\n\r\nPokemon 6:\r\n-Nombre: \r\n-V"
				L"ida: \r\n- Tipo: \r\n-Fuerza: \r\n";
			this->lb_pk_info3->Visible = false;
			// 
			// lb_pk_info2
			// 
			this->lb_pk_info2->AutoSize = true;
			this->lb_pk_info2->Location = System::Drawing::Point(664, 147);
			this->lb_pk_info2->Name = L"lb_pk_info2";
			this->lb_pk_info2->Size = System::Drawing::Size(67, 143);
			this->lb_pk_info2->TabIndex = 4;
			this->lb_pk_info2->Text = L"Pokemon 3: \r\n-Nombre: \r\n-Vida: \r\n- Tipo: \r\n-Fuerza: \r\n\r\nPokemon 4:\r\n-Nombre: \r\n-V"
				L"ida: \r\n- Tipo: \r\n-Fuerza: \r\n";
			this->lb_pk_info2->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Tus Pokemones:";
			// 
			// btn_cazar
			// 
			this->btn_cazar->Enabled = false;
			this->btn_cazar->Location = System::Drawing::Point(518, 59);
			this->btn_cazar->Name = L"btn_cazar";
			this->btn_cazar->Size = System::Drawing::Size(223, 23);
			this->btn_cazar->TabIndex = 1;
			this->btn_cazar->Text = L"Cazar Pokemones";
			this->btn_cazar->UseVisualStyleBackColor = true;
			this->btn_cazar->Click += gcnew System::EventHandler(this, &MyForm::btn_cazar_Click);
			// 
			// panel_inicio
			// 
			this->panel_inicio->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_inicio.BackgroundImage")));
			this->panel_inicio->Controls->Add(this->btn_start);
			this->panel_inicio->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_inicio->Location = System::Drawing::Point(0, 0);
			this->panel_inicio->Name = L"panel_inicio";
			this->panel_inicio->Size = System::Drawing::Size(805, 412);
			this->panel_inicio->TabIndex = 1;
			// 
			// btn_start
			// 
			this->btn_start->Location = System::Drawing::Point(283, 182);
			this->btn_start->Name = L"btn_start";
			this->btn_start->Size = System::Drawing::Size(207, 63);
			this->btn_start->TabIndex = 0;
			this->btn_start->Text = L"Start";
			this->btn_start->UseVisualStyleBackColor = true;
			this->btn_start->Click += gcnew System::EventHandler(this, &MyForm::btn_start_Click);
			// 
			// panel_batalla
			// 
			this->panel_batalla->Controls->Add(this->panel_seleccion);
			this->panel_batalla->Controls->Add(this->panel_stats);
			this->panel_batalla->Controls->Add(this->panel_controls);
			this->panel_batalla->Controls->Add(this->panel_pokemones);
			this->panel_batalla->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_batalla->Location = System::Drawing::Point(0, 0);
			this->panel_batalla->Name = L"panel_batalla";
			this->panel_batalla->Size = System::Drawing::Size(805, 412);
			this->panel_batalla->TabIndex = 4;
			this->panel_batalla->Visible = false;
			// 
			// panel_seleccion
			// 
			this->panel_seleccion->Controls->Add(this->button1);
			this->panel_seleccion->Controls->Add(this->cb_pokemones);
			this->panel_seleccion->Location = System::Drawing::Point(206, 92);
			this->panel_seleccion->Name = L"panel_seleccion";
			this->panel_seleccion->Size = System::Drawing::Size(200, 100);
			this->panel_seleccion->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(40, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Seleccionar Pokemon";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// cb_pokemones
			// 
			this->cb_pokemones->FormattingEnabled = true;
			this->cb_pokemones->Location = System::Drawing::Point(40, 22);
			this->cb_pokemones->Name = L"cb_pokemones";
			this->cb_pokemones->Size = System::Drawing::Size(121, 21);
			this->cb_pokemones->TabIndex = 4;
			// 
			// panel_stats
			// 
			this->panel_stats->Controls->Add(this->lb_fuerza_a);
			this->panel_stats->Controls->Add(this->lb_tipo_a);
			this->panel_stats->Controls->Add(this->lb_vida_a);
			this->panel_stats->Controls->Add(this->lb_nombre_a);
			this->panel_stats->Controls->Add(this->label10);
			this->panel_stats->Controls->Add(this->lb_fuerza_b);
			this->panel_stats->Controls->Add(this->lb_tipo_b);
			this->panel_stats->Controls->Add(this->lb_vida_b);
			this->panel_stats->Controls->Add(this->lb_nombre_b);
			this->panel_stats->Controls->Add(this->lb_1);
			this->panel_stats->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel_stats->Location = System::Drawing::Point(605, 0);
			this->panel_stats->Name = L"panel_stats";
			this->panel_stats->Size = System::Drawing::Size(200, 312);
			this->panel_stats->TabIndex = 1;
			// 
			// lb_fuerza_a
			// 
			this->lb_fuerza_a->AutoSize = true;
			this->lb_fuerza_a->Location = System::Drawing::Point(3, 232);
			this->lb_fuerza_a->Name = L"lb_fuerza_a";
			this->lb_fuerza_a->Size = System::Drawing::Size(45, 13);
			this->lb_fuerza_a->TabIndex = 9;
			this->lb_fuerza_a->Text = L"Fuerza: ";
			// 
			// lb_tipo_a
			// 
			this->lb_tipo_a->AutoSize = true;
			this->lb_tipo_a->Location = System::Drawing::Point(3, 216);
			this->lb_tipo_a->Name = L"lb_tipo_a";
			this->lb_tipo_a->Size = System::Drawing::Size(34, 13);
			this->lb_tipo_a->TabIndex = 8;
			this->lb_tipo_a->Text = L"Tipo: ";
			// 
			// lb_vida_a
			// 
			this->lb_vida_a->AutoSize = true;
			this->lb_vida_a->Location = System::Drawing::Point(3, 194);
			this->lb_vida_a->Name = L"lb_vida_a";
			this->lb_vida_a->Size = System::Drawing::Size(34, 13);
			this->lb_vida_a->TabIndex = 7;
			this->lb_vida_a->Text = L"Vida: ";
			// 
			// lb_nombre_a
			// 
			this->lb_nombre_a->AutoSize = true;
			this->lb_nombre_a->Location = System::Drawing::Point(3, 173);
			this->lb_nombre_a->Name = L"lb_nombre_a";
			this->lb_nombre_a->Size = System::Drawing::Size(50, 13);
			this->lb_nombre_a->TabIndex = 6;
			this->lb_nombre_a->Text = L"Nombre: ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 149);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(68, 13);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Tu Pokemon";
			// 
			// lb_fuerza_b
			// 
			this->lb_fuerza_b->AutoSize = true;
			this->lb_fuerza_b->Location = System::Drawing::Point(3, 92);
			this->lb_fuerza_b->Name = L"lb_fuerza_b";
			this->lb_fuerza_b->Size = System::Drawing::Size(45, 13);
			this->lb_fuerza_b->TabIndex = 4;
			this->lb_fuerza_b->Text = L"Fuerza: ";
			// 
			// lb_tipo_b
			// 
			this->lb_tipo_b->AutoSize = true;
			this->lb_tipo_b->Location = System::Drawing::Point(3, 76);
			this->lb_tipo_b->Name = L"lb_tipo_b";
			this->lb_tipo_b->Size = System::Drawing::Size(34, 13);
			this->lb_tipo_b->TabIndex = 3;
			this->lb_tipo_b->Text = L"Tipo: ";
			// 
			// lb_vida_b
			// 
			this->lb_vida_b->AutoSize = true;
			this->lb_vida_b->Location = System::Drawing::Point(3, 54);
			this->lb_vida_b->Name = L"lb_vida_b";
			this->lb_vida_b->Size = System::Drawing::Size(34, 13);
			this->lb_vida_b->TabIndex = 2;
			this->lb_vida_b->Text = L"Vida: ";
			// 
			// lb_nombre_b
			// 
			this->lb_nombre_b->AutoSize = true;
			this->lb_nombre_b->Location = System::Drawing::Point(3, 33);
			this->lb_nombre_b->Name = L"lb_nombre_b";
			this->lb_nombre_b->Size = System::Drawing::Size(50, 13);
			this->lb_nombre_b->TabIndex = 1;
			this->lb_nombre_b->Text = L"Nombre: ";
			// 
			// lb_1
			// 
			this->lb_1->AutoSize = true;
			this->lb_1->Location = System::Drawing::Point(3, 9);
			this->lb_1->Name = L"lb_1";
			this->lb_1->Size = System::Drawing::Size(67, 13);
			this->lb_1->TabIndex = 0;
			this->lb_1->Text = L"Contrincante";
			// 
			// panel_controls
			// 
			this->panel_controls->Controls->Add(this->btn_huir);
			this->panel_controls->Controls->Add(this->btn_curar);
			this->panel_controls->Controls->Add(this->btn_ataque);
			this->panel_controls->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel_controls->Location = System::Drawing::Point(0, 312);
			this->panel_controls->Name = L"panel_controls";
			this->panel_controls->Size = System::Drawing::Size(805, 100);
			this->panel_controls->TabIndex = 0;
			// 
			// btn_huir
			// 
			this->btn_huir->Location = System::Drawing::Point(409, 43);
			this->btn_huir->Name = L"btn_huir";
			this->btn_huir->Size = System::Drawing::Size(75, 23);
			this->btn_huir->TabIndex = 2;
			this->btn_huir->Text = L"Huir";
			this->btn_huir->UseVisualStyleBackColor = true;
			this->btn_huir->Click += gcnew System::EventHandler(this, &MyForm::btn_huir_Click);
			// 
			// btn_curar
			// 
			this->btn_curar->Location = System::Drawing::Point(283, 43);
			this->btn_curar->Name = L"btn_curar";
			this->btn_curar->Size = System::Drawing::Size(75, 23);
			this->btn_curar->TabIndex = 1;
			this->btn_curar->Text = L"Curar";
			this->btn_curar->UseVisualStyleBackColor = true;
			this->btn_curar->Click += gcnew System::EventHandler(this, &MyForm::btn_curar_Click);
			// 
			// btn_ataque
			// 
			this->btn_ataque->Location = System::Drawing::Point(145, 43);
			this->btn_ataque->Name = L"btn_ataque";
			this->btn_ataque->Size = System::Drawing::Size(75, 23);
			this->btn_ataque->TabIndex = 0;
			this->btn_ataque->Text = L"Ataque";
			this->btn_ataque->UseVisualStyleBackColor = true;
			this->btn_ataque->Click += gcnew System::EventHandler(this, &MyForm::btn_ataque_Click);
			// 
			// panel_pokemones
			// 
			this->panel_pokemones->BackColor = System::Drawing::Color::Transparent;
			this->panel_pokemones->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel_pokemones.BackgroundImage")));
			this->panel_pokemones->Controls->Add(this->pb_pk_b);
			this->panel_pokemones->Controls->Add(this->pb_pk_a);
			this->panel_pokemones->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_pokemones->Location = System::Drawing::Point(0, 0);
			this->panel_pokemones->Name = L"panel_pokemones";
			this->panel_pokemones->Size = System::Drawing::Size(805, 412);
			this->panel_pokemones->TabIndex = 5;
			this->panel_pokemones->Visible = false;
			// 
			// pb_pk_b
			// 
			this->pb_pk_b->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_pk_b.Image")));
			this->pb_pk_b->Location = System::Drawing::Point(453, 167);
			this->pb_pk_b->Name = L"pb_pk_b";
			this->pb_pk_b->Size = System::Drawing::Size(120, 120);
			this->pb_pk_b->TabIndex = 1;
			this->pb_pk_b->TabStop = false;
			this->pb_pk_b->Visible = false;
			// 
			// pb_pk_a
			// 
			this->pb_pk_a->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb_pk_a.Image")));
			this->pb_pk_a->Location = System::Drawing::Point(44, 192);
			this->pb_pk_a->Name = L"pb_pk_a";
			this->pb_pk_a->Size = System::Drawing::Size(120, 120);
			this->pb_pk_a->TabIndex = 0;
			this->pb_pk_a->TabStop = false;
			this->pb_pk_a->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 412);
			this->Controls->Add(this->panel_contenido);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel_contenido->ResumeLayout(false);
			this->panel_menu->ResumeLayout(false);
			this->panel_menu->PerformLayout();
			this->panel_crear->ResumeLayout(false);
			this->panel_crear->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nud_fuerza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nup_vida))->EndInit();
			this->panel_inicio->ResumeLayout(false);
			this->panel_batalla->ResumeLayout(false);
			this->panel_seleccion->ResumeLayout(false);
			this->panel_stats->ResumeLayout(false);
			this->panel_stats->PerformLayout();
			this->panel_controls->ResumeLayout(false);
			this->panel_pokemones->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_pk_b))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_pk_a))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_huir_Click(System::Object^ sender, System::EventArgs^ e) {
		if(pkActual!=-1)
			pokemones[pkActual]->curar();
		panel_batalla->Visible = false;
		panel_menu->Visible = true;
	}
private: System::Void btn_crear_Click(System::Object^ sender, System::EventArgs^ e) {
	nombres[0] = new string("Pikachu");	
	nombres[1] = new string("Alud");
	nombres[2] = new string("Hidro");
	nombres[3] = new string("Ascuas");
	nombres[4] = new string("Cometa");
	pokemones = new Pokemon * [pkMax];
	String^ nombre = tb_nom->Text;
	std::string nombreS = msclr::interop::marshal_as<std::string>(nombre);
	int vida = Convert::ToInt32(nup_vida->Value);
	int tipo = cb_tipo->SelectedIndex;
	string tipoS = "";
	int fuerza = Convert::ToInt32(nud_fuerza->Value);
	switch (tipo){
	case 0:
		pokemones[nPks] = new PokemonNormal(nombreS, vida, fuerza);
		tipoS = "Normal";
		nPks++;
		break;
	case 1:
		pokemones[nPks] = new PokemonHielo(nombreS, vida, fuerza);
		tipoS = "Hielo";
		nPks++;
		break;
	case 2:
		pokemones[nPks] = new PokemonAgua(nombreS, vida, fuerza);
		tipoS = "Agua";
		nPks++;
		break;
	case 3:
		pokemones[nPks] = new PokemonFuego(nombreS, vida, fuerza);
		tipoS = "Fuego";
		nPks++;
		break;
	case 4:
		pokemones[nPks] = new PokemonDragon(nombreS, vida, fuerza);
		tipoS = "Dragon";
		nPks++;
		break;
	default:
		MessageBox::Show("Algo salio mal");
		break;
	}
	
	//gcnew String(pokemones[nPks-1]->getNombre().c_str())
	lb_pk_info->Text = "Pokemon "+ nPks + ":\n-Nombre: " + nombre +"\n-Vida: " + vida + "\n-Tipo: " + gcnew String(tipoS.c_str())+"\n-Fuerza: "+fuerza;
	cb_pokemones->Items->Add(nombre);
	lb_pk_info->Visible = true;
	panel_crear->Visible = false;
	panel_menu->Visible = true;
	btn_cazar->Enabled = true;
}
private: System::Void btn_cazar_Click(System::Object^ sender, System::EventArgs^ e) {
	//Estaba empezando la jugabilidad
	int pk_tipo = rand() % 5;

	std::string nombreStd = *nombres[pk_tipo];
	System::String^ nombre = msclr::interop::marshal_as<System::String^>(nombreStd);

	int numeroAleatorio = rand() % 31 + 45;
	MessageBox::Show("Te encontraste un pokemon: " + pk_tipo + " nombre: " + nombre);
	switch (pk_tipo){
	case 0:
		pk_oponente = new PokemonNormal(*nombres[pk_tipo], numeroAleatorio, rand() % 3 + 1);
		break;
	case 1:
		pk_oponente = new PokemonHielo(*nombres[pk_tipo], numeroAleatorio, rand() % 3 + 1);
		break;
	case 2:
		pk_oponente = new PokemonAgua(*nombres[pk_tipo], numeroAleatorio, rand() % 3 + 1);
		break;
	case 3:
		pk_oponente = new PokemonFuego(*nombres[pk_tipo], numeroAleatorio, rand() % 3 + 1);
		break;
	case 4:
		pk_oponente = new PokemonDragon(*nombres[pk_tipo], numeroAleatorio, rand() % 3 + 1);
		break;
	default:
		pk_oponente = new PokemonNormal(*nombres[pk_tipo], numeroAleatorio, rand() % 3 + 1);
		break;
	}

	lb_nombre_b->Text = "Nombre: " + gcnew String(pk_oponente->getNombre().c_str());
	lb_vida_b->Text = "Vida: " + pk_oponente->getVida();
	lb_tipo_b->Text = "Tipo: " + gcnew String(pk_oponente->getTipoString().c_str());
	lb_fuerza_b->Text = "Fuerza: " + pk_oponente->getFuerza();

	panel_menu->Visible = false;
	panel_batalla->Visible = true;
	panel_pokemones->Visible = true;
	panel_seleccion->Visible = true;
}
private: System::Void btn_start_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_inicio->Visible = false;
	panel_menu->Visible = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	pkActual = cb_pokemones->SelectedIndex;
	lb_nombre_a->Text = "Nombre: " + gcnew String(pokemones[pkActual]->getNombre().c_str());
	lb_vida_a->Text = "Vida: " + pokemones[pkActual]->getVida();
	lb_tipo_a->Text = "Tipo: " + gcnew String(pokemones[pkActual]->getTipoString().c_str());
	lb_fuerza_a->Text = "Fuerza: " + pokemones[pkActual]->getFuerza();
	panel_seleccion->Visible = false;
	//pb_pk_a -> Image = Image::FromFile("C:/Users/Usuario/source/repos/Pokemon/Pokemon/Imagenes/"+pkActual+".png");
	pb_pk_a -> Visible = true;
	pb_pk_b -> Visible = true;
}
	private: System::Void btn_ataque_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pkActual != -1) {
			int danger = pokemones[pkActual]->ataque();
			pk_oponente->recibir(danger);
			lb_vida_b->Text = "Vida: " + pk_oponente->getVida();
			if (pk_oponente->estaVivo()) {
				danger = pk_oponente->ataque();
				pokemones[pkActual]->recibir(danger);
				lb_vida_a->Text = "Vida: " + pokemones[pkActual]->getVida();
				if (!pokemones[pkActual]->estaVivo()) {
					MessageBox::Show("Perdiste");
					pokemones[pkActual]->curar();
					panel_batalla->Visible = false;
					panel_menu->Visible = true;
				}
			}
			else {
				MessageBox::Show("Ganaste"); //444
				pk_oponente->curar();
				if(nPks < pkMax){
					pokemones[nPks++] = pk_oponente;
					cb_pokemones->Items->Add(gcnew String(pk_oponente->getNombre().c_str()));
					MessageBox::Show("Atrapaste un pokemon");
					lb_pk_info->Text = lb_pk_info->Text +  "\n\nPokemon " + nPks + ":\n-Nombre: " + gcnew String(pk_oponente->getNombre().c_str()) + "\n-Vida: " + pk_oponente->getVida() + "\n-Tipo: " + gcnew String(pk_oponente->getTipoString().c_str()) + "\n-Fuerza: " + pk_oponente->getFuerza();
				}
				else {
					MessageBox::Show("Tu pokedex esta llena");
				}
				pb_pk_a->Visible = false;
				pb_pk_b->Visible = false;
				panel_batalla->Visible = false;
				panel_menu->Visible = true;
			}
		}
	}
private: System::Void btn_curar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (pkActual != -1) {
		int numeroAleatorio = rand() % 7 + 7;
		pokemones[pkActual]->setVida(pokemones[pkActual]->getVida() + numeroAleatorio);
		lb_vida_a->Text = "Vida: " + pokemones[pkActual]->getVida();
		numeroAleatorio = rand() % 7 + 7;
		pk_oponente->setVida(pk_oponente->getVida() + numeroAleatorio);
	}
}
};
}
