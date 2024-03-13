/*
*********************************************************************

	TESTE DE UM PROGRAMA QUE MANIPULA 
	A BIBLIOTECA "LIBZIP" NO LINUX.

	OBJETIVOS:
	-ENTENDER COMO A BIBLIOTECA FUNCIONA.
	-ENTENDER AS FUNÇÕES BÁSICAS.
	-LER ARQUIVOS COM SENHA.
	-PRATICAR A LINGUAGEM DE PROGRAMAÇÃO C.
	-TENTAR RE-ESCREVER O PROGRAMA QUE FIZ
		EM PYTHON NA LINGAUGEM C.

	CRIADO POR: LUIZ GABRIEL MAGALHÃES TRINDADE.
	DISTRIBUÍDO SOB A LICENÇA: GPL3.
	GPL3: https://www.gnu.org/licenses/gpl-3.0.en.html#license-text
	
*********************************************************************	
*/

#include <stdio.h>
#include <zip.h>

int main(int argc, char *argv[]){

	// Verificação do número de argumentos
	if (argc != 2){
		printf("%d\n", argc);
		fprintf(stderr, "Quantidade de argumentos inválida!\n");
		return 1;
	}

	// Se o número de argumentos for válido,
	// o primeiro argumento é lido
	char *file = argv[1];

	zip_t *zip_archive = zip_open(file, ZIP_RDONLY, NULL);
	if (!zip_archive){
		fprintf(stderr, "Erro ao abrir o arquivo!\n");
		return 1;
	}

	printf("Arquivo \"%s\" lido com sucesso!\n", file);

	return 0;
}
