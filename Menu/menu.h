
#if !defined(h_menu)
#define h_menu

void menuStart()
{
menuStart:;
    cout << "1. Dang nhap\n";
    cout << "2. Dang ky\n";
    cout << "3. Thoat\n";
    int choice = 0;
    cin >> choice;
    switch (choice)
    {
    case 1:
        logInMenu();
        break;

    default:
        system("cls");
        goto menuStart;
        break;
    }
}

#endif // h_menu
