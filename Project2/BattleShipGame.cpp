#include "BattleShipGame.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    // Включение визуальных стилей для Windows Forms
    Application::EnableVisualStyles();

    // Настройка совместимости текстового рендеринга
    Application::SetCompatibleTextRenderingDefault(false);

    // Запуск главной формы
    morskoiBoi::MyForm mainForm;
    Application::Run(% mainForm);

    return 0;
}

