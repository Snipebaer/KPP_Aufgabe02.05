int main()
{

	double benzinVerbrauch, kilometer;

	printf("Geben Sie den Benzinverbrauch ein: ");
	scanf("%lf", &benzinVerbrauch);

	printf("\nGeben Sie die Kilometerzahl ein: ");
	scanf("%lf", &kilometer);	

	printf("Benzinverbrauch: %.2f Liter\n", benzinVerbrauch * (kilometer/100));

	return 0;
}
