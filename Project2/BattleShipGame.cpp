#include "BattleShipGame.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    // ��������� ���������� ������ ��� Windows Forms
    Application::EnableVisualStyles();

    // ��������� ������������� ���������� ����������
    Application::SetCompatibleTextRenderingDefault(false);

    // ������ ������� �����
    morskoiBoi::MyForm mainForm;
    Application::Run(% mainForm);

    return 0;
}

