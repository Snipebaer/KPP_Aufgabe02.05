int main()
{

	float benzinVerbrauch, kilometer;

	printf("Geben Sie den Benzinverbrauch ein: ");
	scanf("%f", &benzinVerbrauch);

	printf("\nGeben Sie die Kilometerzahl ein: ");
	scanf("%f", &kilometer);	

	printf("Benzinverbrauch: %.2f Liter\n", benzinVerbrauch * (kilometer/100));

	return 0;
}
