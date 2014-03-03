#pragma once
#include "Movies.h"

namespace MovieInventory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
		System::Windows::Forms::ListViewItem^ listItem;

	private: System::Windows::Forms::TextBox^  txtTitle;
	private: System::Windows::Forms::TextBox^  txtGenre;
	private: System::Windows::Forms::TextBox^  txtYear;


	private: System::Windows::Forms::TextBox^  txtPrice;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  cmbRating;
	private: System::Windows::Forms::ListView^  lvMovies;

	private: System::Windows::Forms::ColumnHeader^  colYear;
	private: System::Windows::Forms::ColumnHeader^  colTitle;
	private: System::Windows::Forms::ColumnHeader^  colGenre;
	private: System::Windows::Forms::ColumnHeader^  colPrice;
	private: System::Windows::Forms::ColumnHeader^  colRating;








	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->txtGenre = (gcnew System::Windows::Forms::TextBox());
			this->txtYear = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cmbRating = (gcnew System::Windows::Forms::ComboBox());
			this->lvMovies = (gcnew System::Windows::Forms::ListView());
			this->colTitle = (gcnew System::Windows::Forms::ColumnHeader());
			this->colYear = (gcnew System::Windows::Forms::ColumnHeader());
			this->colGenre = (gcnew System::Windows::Forms::ColumnHeader());
			this->colPrice = (gcnew System::Windows::Forms::ColumnHeader());
			this->colRating = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// txtTitle
			// 
			this->txtTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtTitle->Location = System::Drawing::Point(439, 57);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(115, 30);
			this->txtTitle->TabIndex = 1;
			// 
			// txtGenre
			// 
			this->txtGenre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtGenre->Location = System::Drawing::Point(439, 118);
			this->txtGenre->Name = L"txtGenre";
			this->txtGenre->Size = System::Drawing::Size(115, 30);
			this->txtGenre->TabIndex = 2;
			// 
			// txtYear
			// 
			this->txtYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtYear->Location = System::Drawing::Point(439, 179);
			this->txtYear->MaxLength = 4;
			this->txtYear->Name = L"txtYear";
			this->txtYear->Size = System::Drawing::Size(115, 30);
			this->txtYear->TabIndex = 3;
			// 
			// txtPrice
			// 
			this->txtPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPrice->Location = System::Drawing::Point(439, 301);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(115, 30);
			this->txtPrice->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(381, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Title:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(381, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Genre:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(381, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Year:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(381, 253);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Rating:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(381, 314);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Price:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(439, 405);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 39);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Add movie";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// cmbRating
			// 
			this->cmbRating->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cmbRating->FormattingEnabled = true;
			this->cmbRating->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"PG", L"PG-13", L"R"});
			this->cmbRating->Location = System::Drawing::Point(439, 237);
			this->cmbRating->Name = L"cmbRating";
			this->cmbRating->Size = System::Drawing::Size(115, 33);
			this->cmbRating->TabIndex = 12;
			// 
			// lvMovies
			// 
			this->lvMovies->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {this->colTitle, this->colYear, 
				this->colGenre, this->colPrice, this->colRating});
			this->lvMovies->GridLines = true;
			this->lvMovies->Location = System::Drawing::Point(12, 26);
			this->lvMovies->Name = L"lvMovies";
			this->lvMovies->Size = System::Drawing::Size(363, 448);
			this->lvMovies->TabIndex = 14;
			this->lvMovies->UseCompatibleStateImageBehavior = false;
			this->lvMovies->View = System::Windows::Forms::View::Details;
			// 
			// colTitle
			// 
			this->colTitle->Text = L"Title";
			this->colTitle->Width = 106;
			// 
			// colYear
			// 
			this->colYear->Text = L"Year";
			// 
			// colGenre
			// 
			this->colGenre->Text = L"Genre";
			this->colGenre->Width = 78;
			// 
			// colPrice
			// 
			this->colPrice->Text = L"Price";
			// 
			// colRating
			// 
			this->colRating->Text = L"Rating";
			this->colRating->Width = 55;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 504);
			this->Controls->Add(this->lvMovies);
			this->Controls->Add(this->cmbRating);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->txtYear);
			this->Controls->Add(this->txtGenre);
			this->Controls->Add(this->txtTitle);
			this->Name = L"Form1";
			this->Text = L"Movie Inventory";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		List<Movie^>^ movieList;

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 movieList = gcnew List<Movie^>();
				
				 movieList->Add(gcnew Movie(1996, "Idiocracy", "Comedy", 9.99, "R"));

				 DisplayMovies();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 double mPrice;
				 int mYear;
				 Int32::TryParse(txtYear->Text, mYear);
				 String^ mTitle = txtTitle->Text;
				 String^ mGenre = txtGenre->Text;
				 String^ mRating;

				 if (cmbRating->SelectedIndex == -1)
					 MessageBox::Show("Please select a rating");		 
				 else if (!Int32::TryParse(txtYear->Text, mYear) || mYear <= 1000)
					 MessageBox::Show("Please enter a valid year");
				 else if (!Double::TryParse(txtPrice->Text, mPrice))
					MessageBox::Show("Please enter a valid price");
				 else {
					 // Get the selected rating and set it
					 mRating = cmbRating->SelectedItem->ToString();

					 movieList->Add(gcnew Movie(mYear, mTitle, mGenre, mPrice, mRating));
					 DisplayMovies();
				 }
			 }

	private: void DisplayMovies() {
				 lvMovies->Items->Clear();

				 for each (Movie^ movie in movieList) 
				 {

					listItem = gcnew Windows::Forms::ListViewItem(movie->getMovie());
					listItem->SubItems->Add(movie->getYear().ToString());
					listItem->SubItems->Add(movie->getGenre());
					listItem->SubItems->Add(movie->getPrice()->ToString());
					listItem->SubItems->Add(movie->getRating());
					lvMovies->Items->Add(listItem);
				 }
			 }
};
}

