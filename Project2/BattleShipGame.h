#pragma once

namespace morskoiBoi
	{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

	
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ новаяИграToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ информацияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private:
		Panel^ playerBoardPanel; // Панель для отображения поля игрока
		Panel^ enemyBoardPanel;  // Панель для отображения поля противника
		Button^ button1;
		Button^ button2;
		Button^ button3;
		Button^ button4;
		Button^ newGame;

		// Объявление компонента, который будет управлять элементами формы
		System::ComponentModel::Container^ components;
	
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->новаяИграToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->информацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->newGame = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			this->groupBox3->Location = System::Drawing::Point(590, 590);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(800, 300);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"ваши корабли";
			this->Controls->Add(groupBox3);

			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"1/1";
			this->groupBox3->Controls->Add(this->label4);

			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(113, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"2/2";
			this->groupBox3->Controls->Add(this->label5);

			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(203, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 20);
			this->label6->TabIndex = 4;
			this->label6->Text = L"3/3";
			this->groupBox3->Controls->Add(this->label6);

			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(293, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 20);
			this->label7->TabIndex = 4;
			this->label7->Text = L"4/4";
			this->groupBox3->Controls->Add(this->label7);

			// Создание и добавление кнопки 1
			this->button1 = gcnew Button();
			this->button1->Location = Point(10, 25);
			this->button1->Size = System::Drawing::Size(50, 200);
			this->button1->Visible = true;
			this->button1->BackColor = Color::Olive;
			this->groupBox3->Controls->Add(this->button1); // Добавление кнопки в groupBox3

			// Создание и добавление кнопки 2
			this->button2 = gcnew Button();
			this->button2->Location = Point(100, 25);
			this->button2->Size = System::Drawing::Size(50, 150);
			this->button2->Visible = true;
			this->button2->BackColor = Color::Olive;
			this->groupBox3->Controls->Add(this->button2); // Добавление кнопки в groupBox3

			// Создание и добавление кнопки 3
			this->button3 = gcnew Button();
			this->button3->Location = Point(190, 25);
			this->button3->Size = System::Drawing::Size(50, 100);
			this->button3->Visible = true;
			this->button3->BackColor = Color::Olive;
			this->groupBox3->Controls->Add(this->button3); // Добавление кнопки в groupBox3

			// Создание и добавление кнопки 4
			this->button4 = gcnew Button();
			this->button4->Location = Point(280, 25);
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->Visible = true;
			this->button4->BackColor = Color::Olive;
			this->groupBox3->Controls->Add(this->button4); // Добавление кнопки в groupBox3
			// Создание и добавление кнопки 1
			this->newGame = gcnew Button();
			this->newGame->Location = Point(this->buttonSize*11+100, 20);
			this->newGame->Size = System::Drawing::Size(125, 50);
			this->newGame->Visible = true;
			this->newGame->Text = "Новая игра";
			this->newGame->BackColor = Color::Olive;
			this->newGame->Click += gcnew EventHandler(this, &MyForm::MyButton_Click);
			this->Controls->Add(newGame);
			// Инициализация формы
			this->Text = "Морской бой пиратская версия";
			this->Size = System::Drawing::Size(1920, 1080);

			// Инициализация панелей для поля игрока и противника
			playerBoardPanel = gcnew Panel();
			enemyBoardPanel = gcnew Panel();

			playerBoardPanel->Location = Point(20, 35+20+ this->buttonSize * 11);
			playerBoardPanel->Size = System::Drawing::Size(this->buttonSize*11, this->buttonSize * 11);
			playerBoardPanel->BackColor = Color::LightBlue;

			enemyBoardPanel->Location = Point(20, 35);
			enemyBoardPanel->Size = System::Drawing::Size(this->buttonSize * 11, this->buttonSize * 11);
			enemyBoardPanel->BackColor = Color::LightCoral;

			this->Controls->Add(playerBoardPanel);
			this->Controls->Add(enemyBoardPanel);

			// Добавление кнопок для каждой клетки на поле
			InitializeBoard(playerBoardPanel);
			InitializeBoard(enemyBoardPanel);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->менюToolStripMenuItem,
					this->информацияToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(741, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->новаяИграToolStripMenuItem });
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(75, 29);
			this->менюToolStripMenuItem->Text = L"меню";
			// 
			// новаяИграToolStripMenuItem
			// 
			this->новаяИграToolStripMenuItem->Name = L"новаяИграToolStripMenuItem";
			this->новаяИграToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->новаяИграToolStripMenuItem->Text = L"новаяИгра";
			// 
			// информацияToolStripMenuItem
			// 
			this->информацияToolStripMenuItem->Name = L"информацияToolStripMenuItem";
			this->информацияToolStripMenuItem->Size = System::Drawing::Size(134, 29);
			this->информацияToolStripMenuItem->Text = L"информация";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(80, 29);
			this->выходToolStripMenuItem->Text = L"выход";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(166, 369);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(395, 324);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(166, 39);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(395, 324);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(470, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"<- поле противника";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(470, 500);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"<- твоё поле";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(455, 104);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(327, 93);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"игра окончена";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(54, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"перезапустите игру";
			// 
			// MyForm
			// 
//			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
//			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
//			this->ClientSize = System::Drawing::Size(741, 706);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

			this->KeyPreview = true; // Чтобы форма могла обрабатывать нажатия клавиш
			this->KeyDown += gcnew KeyEventHandler(this, &MyForm::MyForm_KeyDown);


		}
		void MyForm::MyButton_Click(Object^ sender, EventArgs^ e)
		{
			janitor();
			PlaceAIShips();
		}


		int selectedShipSize = 0; // Размер текущего выбранного корабля
		
		void InitializeBoard(Panel^ panel)
		{
			// Создание сетки из 10x10 кнопок для каждой панели
			for (int i = 0; i < 11; i++)
			{
				for (int j = 0; j < 11; j++)
				{
					Button^ button = gcnew Button();
					button->Size = System::Drawing::Size(this->buttonSize, this->buttonSize);
					button->Location = Point(i * this->buttonSize, j * this->buttonSize);
					button->BackColor = Color::White;

					if (i == 0 && j != 0)
					{
						button->Text = System::Convert::ToString(j);
					}
					else if (j == 0)
					{
						button->Text = System::Convert::ToString(ffdfd[i]);
					}

					// Привязка обработчиков событий для кликов и наведения курсора
					button->Click += gcnew EventHandler(this, &MyForm::OnCellClick);
					button->MouseEnter += gcnew EventHandler(this, &MyForm::OnCellMouseEnter);
					button->MouseLeave += gcnew EventHandler(this, &MyForm::OnCellMouseLeave);

					panel->Controls->Add(button);
				}
			}
		}
		// Функция для расстановки кораблей ИИ
		void PlaceAIShips()
		{
			Random^ rand = gcnew Random();
			array<int>^ shipSizes = { 4, 3, 3, 2, 2, 2, 1, 1, 1, 1 }; // Массив с размерами кораблей
			//array<Button^, 2>^ enemyBoardButtons = gcnew array<Button^, 2>(11, 11);

			for each (int shipSize in shipSizes)
			{
				bool placed = false;

				while (!placed)
				{
					// Случайный выбор ориентации: 0 - горизонтальная, 1 - вертикальная
					bool isHorizontal = rand->Next(2) == 0;
					int startX;
					int startY;
					if (isHorizontal)
					{
						startX = rand->Next(this->buttonSize+1, 12 * this->buttonSize - shipSize* this->buttonSize); // Учитываем размер корабля
						startY = rand->Next(this->buttonSize+1, 12 * this->buttonSize );
					}
					else {
						startX = rand->Next(this->buttonSize+1, 12 * this->buttonSize); // Учитываем размер корабля
						startY = rand->Next(this->buttonSize+1, 12 * this->buttonSize - shipSize * this->buttonSize);
					}


					if (CanPlaceShip(startX, startY, shipSize, isHorizontal))
					{
						PlaceShip(startX, startY, shipSize, isHorizontal);
						placed = true;
					}
				}
			}
		}

		// Проверка, можно ли разместить корабль
		void janitor() {
			for (int x=this->buttonSize; x < 10*this->buttonSize+1; x+= this->buttonSize) {
				for (int y= this->buttonSize; y < 10 * this->buttonSize + 1; y += this->buttonSize) {
					Button^ button = dynamic_cast<Button^>(this->enemyBoardPanel->GetChildAtPoint(Point(x, y)));
					button->BackColor = Color::White;
				}

			}

		}
		bool CanPlaceShip( int x, int y, int size, bool isHorizontal)
		{
			for (int i = 0; i < size; i++)
			{		
				int counter = 0;
				int curX = x;
				int curY = y;
				if (isHorizontal)
				{

					for (int x = curY - this->buttonSize; x <= curY + this->buttonSize * 2 - this->buttonSize; x += this->buttonSize)
					{
						for (int y = curX + i * this->buttonSize - this->buttonSize; y <= curX + i * this->buttonSize + this->buttonSize * 2 - this->buttonSize; y += this->buttonSize)
						{
							counter++;
							if (y > this->buttonSize * 10 || y < this->buttonSize || x>this->buttonSize * 10 || x < this->buttonSize)
							{
								if (counter == 5)
									return false;
							}
							Button^ button = dynamic_cast<Button^>(this->enemyBoardPanel->GetChildAtPoint(Point(y, x)));
							if (counter == 5 && button == nullptr)
							{
								return false;
							}
							if (button != nullptr && button->BackColor == Color::FromArgb(255,255,0))
							{
								return false;
							}
						}
					}
				}
				else
				{
					for (int x = curY + i * this->buttonSize - this->buttonSize; x <= curY + i * this->buttonSize + this->buttonSize * 2 - this->buttonSize; x += this->buttonSize)
					{
						for (int y = curX - this->buttonSize; y <= curX + this->buttonSize * 2 - this->buttonSize; y += this->buttonSize)
						{
							counter++;
							if (y > this->buttonSize * 10 || y < this->buttonSize || x>this->buttonSize * 10 || x < this->buttonSize)
							{
								if (counter == 5)
									return false;

							}
							Button^ button = dynamic_cast<Button^>(this->enemyBoardPanel->GetChildAtPoint(Point(y, x)));
							if (counter == 5 && button == nullptr)
							{
								return false;
							}
							if (button != nullptr && button->BackColor == Color::FromArgb(255, 255, 0))
							{
								return false;
							}
						}
					}
				}

			}

			return true;
		}

		// Размещение корабля на поле
		void PlaceShip(int x, int y, int size, bool isHorizontal)
		{
			for (int i = 0; i < size; i++)
			{
				if (isHorizontal)
				{
					Button^ button = dynamic_cast<Button^>(this->enemyBoardPanel->GetChildAtPoint(Point(x + this->buttonSize * i, y)));
					button->BackColor = Color::FromArgb(255, 255, 0);
				}
				else
				{
					Button^ button = dynamic_cast<Button^>(this->enemyBoardPanel->GetChildAtPoint(Point(x, y + this->buttonSize * i)));
					button->BackColor = Color::FromArgb(255, 255, 0);
				}

			}
		}

		// Обработчик клика по кнопке
		void OnCellClick(Object^ sender, EventArgs^ e)
		{
			Button^ clickedButton = (Button^)sender;
			Panel^ parentPanel = (Panel^)clickedButton->Parent;
			if (parentPanel == this->enemyBoardPanel)
			{
				if (clickedButton->BackColor == Color::FromArgb(255, 255, 0)) {
					clickedButton->Text = "X";
				}
			}
			else if ((selectedShipSize == 1 && Ship1 != 0) || (selectedShipSize == 2 && Ship2 != 0) || (selectedShipSize == 3 && Ship3 != 0) || (selectedShipSize == 4 && Ship4 != 0)) {
				int startX = clickedButton->Location.X;
				int startY = clickedButton->Location.Y;

				if (isHorizontal)
				{

					for (int i = 0; i < selectedShipSize; i++)
					{
						int counter = 0;
						for (int x = startY - this->buttonSize ; x <= startY + this->buttonSize * 2 - this->buttonSize; x += this->buttonSize)
						{
							for (int y = startX + i * this->buttonSize - this->buttonSize; y <= startX + i * this->buttonSize + this->buttonSize * 2 - this->buttonSize; y += this->buttonSize)
							{

								Console::WriteLine(y+" "+x);
								counter++;
								if (y > this->buttonSize*20 || y < this->buttonSize || x>this->buttonSize*10 || x < this->buttonSize)
								{
									if (counter == 5)
										return;
								}
								Button^ button = dynamic_cast<Button^>(parentPanel->GetChildAtPoint(Point(y, x)));
								if (counter == 5 && button == nullptr)
								{
									return;
								}
								if ((button != nullptr && button->BackColor == Color::Red))
								{
									return;
								}
							}
						}
					}
					if (selectedShipSize == 1) {
						Ship1--;
						this->label7->Text = System::Convert::ToString(Ship1)+"/4";
					}
					else if (selectedShipSize == 2) {
						Ship2--;
						this->label6->Text = System::Convert::ToString(Ship2) + "/3";
					}
					else if (selectedShipSize == 3) {
						Ship3--;
						this->label5->Text = System::Convert::ToString(Ship3) + "/2";
					}
					else if (selectedShipSize == 4) {
						Ship4--;
						this->label4->Text = System::Convert::ToString(Ship4) + "/1";
					}
					for (int i = 0; i < selectedShipSize; i++)
					{
						Button^ button = dynamic_cast<Button^>(parentPanel->GetChildAtPoint(Point(startX + i * this->buttonSize, startY)));
						button->BackColor = Color::Red;
					}
				}
				else
				{
					for (int i = 0; i < selectedShipSize; i++)
					{
						int counter = 0;
						for (int x = startY + i * this->buttonSize - this->buttonSize; x <= startY + i * this->buttonSize + this->buttonSize * 2 - this->buttonSize; x += this->buttonSize)
						{
							for (int y = startX - this->buttonSize; y <= startX + this->buttonSize * 2 - this->buttonSize; y += this->buttonSize)
							{
								counter++;
								if (y > this->buttonSize*10 || y < this->buttonSize || x>this->buttonSize*10 || x < this->buttonSize)
								{
									if (counter == 5)
										return;

								}
								Button^ button = dynamic_cast<Button^>(parentPanel->GetChildAtPoint(Point(y, x)));
								if (counter == 5 && button == nullptr)
								{
									return;
								}
								if (button != nullptr && button->BackColor == Color::Red)
								{
									return;
								}
							}
						}
					}
					if (selectedShipSize == 1) {
						Ship1--;
						this->label7->Text = System::Convert::ToString(Ship1) + "/4";
					}
					else if (selectedShipSize == 2) {
						Ship2--;
						this->label6->Text = System::Convert::ToString(Ship2) + "/3";
					}
					else if (selectedShipSize == 3) {
						Ship3--;
						this->label5->Text = System::Convert::ToString(Ship3) + "/2";
					}
					else if (selectedShipSize == 4) {
						Ship4--;
						this->label4->Text = System::Convert::ToString(Ship4) + "/1";
					}
					for (int i = 0; i < selectedShipSize; i++)
					{
						Button^ button = dynamic_cast<Button^>(parentPanel->GetChildAtPoint(Point(startX, startY + i * this->buttonSize)));
						button->BackColor = Color::Red;
					}
				}
			}
					
		}

		void OnCellMouseEnter(Object^ sender, EventArgs^ e)
		{
			Button^ hoveredButton = (Button^)sender;
			HighlightCellsUnderCursor(hoveredButton, Color::Pink);
		}



		void OnCellMouseLeave(Object^ sender, EventArgs^ e)
		{
			Button^ hoveredButton = (Button^)sender;
			HighlightCellsUnderCursor(hoveredButton, Color::White);
		}


		// Метод для выделения клеток под курсором в зависимости от размера корабля
		void HighlightCellsUnderCursor(Button^ startButton, Color color)
		{
			Panel^ parentPanel = (Panel^)startButton->Parent;

			if (parentPanel == this->enemyBoardPanel)
			{
				return;
			}


			int startX = startButton->Location.X;
			int startY = startButton->Location.Y;
			int buf = selectedShipSize;
			if (isHorizontal)
			{
				for (int i = 0; i < selectedShipSize; i++)
				{
					Button^ button = dynamic_cast<Button^>(parentPanel->GetChildAtPoint(Point(startX + i * this->buttonSize, startY)));
					if (button != nullptr && button->BackColor != Color::Red)
					{
						button->BackColor = color;
					
					}
				}
			}
			else
			{
				for (int i = 0; i < selectedShipSize; i++)
				{
					Button^ button = dynamic_cast<Button^>(parentPanel->GetChildAtPoint(Point(startX , startY + i * this->buttonSize)));
					if (button != nullptr && button->BackColor != Color::Red)
					{
						button->BackColor = color;
					}
				}
			}
			selectedShipSize = buf;
		}

		// Обработчики нажатия на кнопки для выбора размера корабля
		void OnShipButtonClicked(Object^ sender, EventArgs^ e)
		{
			Button^ clickedButton = (Button^)sender;

			if (clickedButton == button1) selectedShipSize = 4;
			else if (clickedButton == button2) selectedShipSize = 3;
			else if (clickedButton == button3) selectedShipSize = 2;
			else if (clickedButton == button4) selectedShipSize = 1;
		}
		void MyForm_KeyDown(Object^ sender, KeyEventArgs^ e)
		{
			if (e->KeyCode == Keys::R)
			{
				isHorizontal = !isHorizontal; // Переключение ориентации корабля
			}
		}
		public:
		// Привязка обработчиков событий к кнопкам выбора корабля
		MyForm()
		{
			InitializeComponent();
			button1->Click += gcnew EventHandler(this, &MyForm::OnShipButtonClicked);
			button2->Click += gcnew EventHandler(this, &MyForm::OnShipButtonClicked);
			button3->Click += gcnew EventHandler(this, &MyForm::OnShipButtonClicked);
			button4->Click += gcnew EventHandler(this, &MyForm::OnShipButtonClicked);
		}
#pragma endregion
	private:
		int buttonSize =30;
		int Ship1 = 4;
		int Ship2 = 3;
		int Ship3 = 2;
		int Ship4 = 1;

	bool isHorizontal = true; // Ориентация корабля: true - горизонтальная, false - вертикальная
	int currentShipSize = 1;   // Размер текущего корабля (устанавливается в зависимости от button1 - button4)
	String^ ffdfd = " абвгдежзик";
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	//Добавить кнопку старт игры
	//ИИ УУУ
	//destruction
	//определение победы
};
}
