#Este sistema usa alocação de memória fixa, ou seja, ao finalizar o mesmo apaga todos os dados inseridos.
#Sistema desenvolvido para aplicar conhecimentos em C onde aloquei todas as minhas funcionalidades do sistema dentro de funções e me basiei numa Struct para armazenar meus dados facilitando o desenvolvimento.
---Menu-----
#Menu foi gerado através de uma função onde o mesmo é chamado dentro do int main() deixando assim mais dinamico e permitindo que
#o mesmo pode ser chamado após a execução de cada uma das funções escritas para o sistema. 
	#1. Cadastrar filmes (chama a função de cadastro)
	#2. Listar Filmes (chama a função que lista os filmes cadastrados) 
	#3. Busca (faz uma busca nos meus cadastros por um código de id cadastrado pelo usuário)
	#4. Sair (Encerrar o programa)
---Cadastro---
#Cadastro dos dados que será feito pelo usuario
#O usuario possuira a permissão para cadastrar até 50 filmes
#Foi feito uma validação onde o usuário define quantos filmes deseja cadastrar por vez na qual ao terminar de realizar a quantidade de 
#cadastros desejado o mesmo retorna para o menu principal automaticamente. É importante informar que o usuário deve informar um código do filme (ID)
#para que seja possivel utilizar a função de busca.
	#ID
	#nome do filme
	#nota que esse filme possui de 0 a 5
	#duração em minutos que esse filme terá ex: 90 min
---Lista---
#Esta função é feito uma validação onde caso o usuario não tenha nada cadastrado ele informa que não existe esse cadastro e retorna ao menu para poder realizar
#o cadastro dos filmes, caso possua informações de cadastros irá ser listados somente os filmes cadastrados usando também uma validação no ID cadastrado que será
#necessáriamente maior que 0
	#ID
	#Nome: Este é um exemplo de nome
	#nota: 4.5
	#duração: 90 min

---Busca---
#Foi feita uma validação dentro de um FOR na qual sera passada uma condicional em toda a struct onde estou procurando por um ID especifico cadastrado pelo usuário
#na qual ao encontrar uma correspondente o mesmo irá imprimir todos os dados na tela.

	#ID
	#Nome: Este é um exemplo de nome
	#nota: 4.5
	#duração: 90 min

---Encerramento---
#Muito obrigado por usar nosso programa



