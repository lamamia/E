#include<stdio.h>
int main(){
    int dodo, gogo;
    int total, deposit, change, menu;
    int w500, w100, w50, w10;
    int cnt_dodo, cnt_gogo;
    while(1)
    {
        printf("�ǶǸ� 70�� �ǲǹ� 30�� �Դϴ�.");
        printf("������ ������ �� �Է��ϼ���.");
        scanf("%d %d", &cnt_dodo, &cnt_gogo);
        dodo = 70*cnt_dodo;
        gogo = 30*cnt_gogo;
        total = dodo +gogo;
        printf("�� �ݾ��� %d�Դϴ�.\n",total);
        printf("������ �ݾ��� �Է��ϼ���.\n");
        scanf("%d",&deposit);
        if(deposit>total){
            change = deposit - total;
            w500 = change /500;
            w100 = change%500 / 100;
            w50 = change%100 / 50;
            w10 = change%50 / 10;
            printf("�Ƕǹ� ��ü �ݾ�: %d\n",dodo);
            printf("�ǲǹ� ��ü �ݾ� : %d\n",gogo);
            printf("�Ž����� : %d\n", change);
            printf("*^^* �Ž����� ������ ���� *^^*\n\n");
            printf("500�� : %d��\n", w500);
            printf("100�� : %d��\n", w100);
            printf("50�� : %d��\n",w50);
            printf("10�� : %d��\n",w10);
            printf("\n#*#*#*#*#*#*#*#*#*#*#*\n\n");
            printf("����Ͻðڽ��ϱ�? �ٽ� �Է��Ϸ��� 1 �������� 0�� �����ּ���");
            scanf("%d",&menu);
            if(menu==0) break;
            else continue;
        }
        else{
            printf("�ݾ��� �����մϴ�. �ٽ� �Է��Ϸ��� 1 �������� 0�� �����ּ���.");
            scanf("%d",&menu);
            if(menu==0) break;
            else continue;

        }
        return 0;

    }
}