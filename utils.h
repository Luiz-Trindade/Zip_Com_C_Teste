/*
	Biblioteca customizada chamada de "Utils"
	ou "utils.h". 
	-Como utilizar? 
	-Resposta: #include "utils.h"

	Biblioteca com funções personalizadas
	para simplificar a programação em 
	linguagem C, de modo a economizar linhas
	de código e fornecer funções úteis. Além
	de incluir bibliotecas padrões e úteis da
	própria linguagem C, podendo escolher quais
	o programador gostaria de utilizar através de
	comentários.

	Criado por: Luiz Gabriel Magalhães Trindade.
	Estudante de ciência da computação na faculdade
	FACI WYDEN.

	Este programa é software livre: você pode 
	redistribuí-lo e/ou modificá-lo sob os termos 
	da Licença Pública Geral GNU, conforme publicada 
	pela Fundação Free Software, seja a versão 3 da 
	Licença ou (a seu critério) qualquer versão posterior.
	
	Este programa é distribuído na esperança de que seja 
	útil, mas SEM NENHUMA GARANTIA; sem mesmo a garantia 
	implícita de COMERCIABILIDADE ou ADEQUAÇÃO A UM 
	PROPÓSITO ESPECÍFICO. Veja a Licença Pública Geral 
	GNU para mais detalhes.
	
	Você deve ter recebido uma cópia da Licença Pública 
	Geral GNU juntamente com este programa. Se não, 
	consulte:

	<https://www.gnu.org/licenses/gpl-3.0.en.html#license-text>
	<https://www.gnu.org/licenses/>.
*/

//	Inclusão das bibliotecas padrões da linguagem C.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//	Função para mensagens de erro.
int die(char *message){
	fprintf(stderr, "%s\n", message);
	exit(1);
}

/*
	Simples função de "inputf", que é
	um "input formatado", que recebe como
	parâmetros o tipo de dado que seria
	recebido, uma mensagem para exibir ao
	usuário e o endereço de memória da
	variável que já foi declarada.

	No trecho do comando "scanf" é utilizada
	a conversão de tipos de ponteiros (casting),
	que um ponteiro do tipo "void" pode ser de 
	qualquer tipo.
*/
int inputf(const char *type, const char *message, void *adress){
	printf("%s", message);
	
	if (strcmp(type, "%i") == 0){
		scanf("%i", (int *)adress);
	}
	else if (strcmp(type, "%f") == 0){
		scanf("%f", (float *)adress);
	}
	else if (strcmp(type, "%s") == 0){
		scanf("%s", (char *)adress);
	}
	else{
		die("Invalid type!\n");
	}

	return 0;
}
