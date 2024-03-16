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

#include "utils.h"
#include <zip.h>

int main(int argc, char *argv[]){

	//	Verificação do número de argumentos
	if (argc != 2){
		printf("%d\n", argc);
		die("Quantidade de argumentos inválida!");
	}

	//	Se o número de argumentos for válido,
	//	o primeiro argumento é lido
	char *file = argv[1];

	/* 
		Criação de um ponteiro do tipo "zip_t",
		que é um tipo próprio da biblioteca libzip/zip.h.

		O ponteiro recebe o nome de "zip_archive", que
		recebe o retorno da leitura da função zip_open.

		A função "zip_open" recebe como parâmetros o
		arquivo, o modo de abertura e NULL indica que 
		não será reservado nenhum valor para alocação
		de memória (Ainda pretendo estudar posteriormente 
		sobre isso).
	*/
	zip_t *zip_archive = zip_open(file, ZIP_RDONLY, NULL);

	//	Verificação da leitura bem sucedida ou não.
	if (!zip_archive){
		die("Erro ao abrir o arquivo!");
	}

	printf("Arquivo \"%s\" lido com sucesso!\n", file);

	return 0;
}
