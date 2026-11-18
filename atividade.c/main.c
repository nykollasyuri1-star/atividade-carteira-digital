int main()
{

    int opcao;

    do
    {

        printf("\n====== CARTEIRA DIGITAL ======\n");

        printf("1 - Abrir banco\n");

        printf("2 - Consultar historico\n");

        printf("3 - Efetuar sorteio\n");

        printf("4 - Solicitar emprestimo\n");

        printf("0 - Sair\n");

        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);

        switch (opcao)
        {

        case 1:

            break;

        case 2:

            break;

        case 3:

            break;

        case 4:

            break;

        case 0:

            printf("\nSistema encerrado!\n");

            break;

        default:

            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
