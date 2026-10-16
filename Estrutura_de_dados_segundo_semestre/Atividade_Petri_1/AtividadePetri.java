import java.util.Scanner;

public class AtividadePetri {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] numeros = new int[10];
        int quantidade = 0; // quantos numeros tem no vetor
        int escolha = 0;

        while (escolha != 8) {
            System.out.println("\nATIVIDADE PETRI");
            System.out.println("1 - Inserir na proxima posicao livre");
            System.out.println("2 - Inserir em uma posicao informada");
            System.out.println("3 - Pesquisar pelo numero");
            System.out.println("4 - Pesquisar pela posicao");
            System.out.println("5 - Excluir pelo numero");
            System.out.println("6 - Excluir pela posicao");
            System.out.println("7 - Imprimir vetor");
            System.out.println("8 - Encerrar programa");
            System.out.print("Escolha uma opcao: ");
            escolha = scanner.nextInt();

            switch (escolha) {
                case 1:
                    if (quantidade >= numeros.length) {
                        System.out.println("O vetor esta cheio!");
                    } else {
                        System.out.print("Digite o numero que deseja inserir: ");
                        int numeroAdicionar = scanner.nextInt();

                        numeros[quantidade] = numeroAdicionar;
                        quantidade++; // passa pra proxima posicao

                        System.out.println("Numero inserido com sucesso!");
                    }
                    break;

                case 2:
                    if (quantidade >= numeros.length) {
                        System.out.println("O vetor esta cheio!");
                    } else {
                        System.out.print("Digite a posicao onde deseja inserir: ");
                        int posicaoInserir = scanner.nextInt();

                        if (posicaoInserir < 0 || posicaoInserir > quantidade) {
                            System.out.println("Posicao invalida!");
                        } else {
                            System.out.print("Digite o numero: ");
                            int numeroInserir = scanner.nextInt();

                            // vai jogando os numeros pra frente pra abrir espaco
                            int i = quantidade;
                            while (i > posicaoInserir) {
                                numeros[i] = numeros[i - 1];
                                i--;
                            }

                            numeros[posicaoInserir] = numeroInserir;
                            quantidade++;
                            System.out.println("Numero inserido com sucesso!");
                        }
                    }
                    break;

                case 3:
                    if (quantidade == 0) {
                        System.out.println("O vetor esta vazio!");
                    } else {
                        System.out.print("Digite o numero que deseja pesquisar: ");
                        int numeroProcurado = scanner.nextInt();

                        int posicaoEncontrada = -1;
                        int i = 0;

                        while (i < quantidade) {
                            if (numeros[i] == numeroProcurado) {
                                posicaoEncontrada = i;
                                break;
                            }
                            i++;
                        }

                        if (posicaoEncontrada == -1) {
                            System.out.println("Numero nao encontrado.");
                        } else {
                            System.out.println("Numero encontrado na posicao " + posicaoEncontrada);
                        }
                    }
                    break;

                case 4:
                    if (quantidade == 0) {
                        System.out.println("O vetor esta vazio!");
                    } else {
                        System.out.print("Digite a posicao que deseja pesquisar: ");
                        int posicaoConsultar = scanner.nextInt();

                        // confere se ealmente tem algum numero
                        if (posicaoConsultar < 0 || posicaoConsultar >= quantidade) {
                            System.out.println("Posicao invalida!");
                        } else {
                            System.out.println("O numero da posicao " + posicaoConsultar + " e: " + numeros[posicaoConsultar]);
                        }
                    }
                    break;

                case 5:
                    if (quantidade == 0) {
                        System.out.println("O vetor esta vazio!");
                    } else {
                        System.out.print("Digite o numero que deseja excluir: ");
                        int numeroRemover = scanner.nextInt();

                        int posicaoRemover = -1;
                        int i = 0;

                        // primeiro precisa achar onde o numero ta
                        while (i < quantidade) {
                            if (numeros[i] == numeroRemover) {
                                posicaoRemover = i;
                                break;
                            }
                            i++;
                        }

                        if (posicaoRemover == -1) {
                            System.out.println("Numero nao encontrado.");
                        } else {
                            int j = posicaoRemover;

                            while (j < quantidade - 1) {
                                numeros[j] = numeros[j + 1];
                                j++;
                            }

                            quantidade--; // agora tem um numero a menos
                            System.out.println("Numero removido com sucesso!");
                        }
                    }
                    break;

                case 6:
                    if (quantidade == 0) {
                        System.out.println("O vetor esta vazio!");
                    } else {
                        System.out.print("Digite a posicao que deseja excluir: ");
                        int posicaoExcluir = scanner.nextInt();

                        if (posicaoExcluir < 0 || posicaoExcluir >= quantidade) {
                            System.out.println("Posicao invalida!");
                        } else {
                            int i = posicaoExcluir;

                            // puxa os outros numeros pra esquerda
                            while (i < quantidade - 1) {
                                numeros[i] = numeros[i + 1];
                                i++;
                            }

                            quantidade--;
                            System.out.println("Numero removido com sucesso!");
                        }
                    }
                    break;

                case 7:
                    if (quantidade == 0) {
                        System.out.println("O vetor esta vazio!");
                    } else {
                        System.out.println("\n===== NUMEROS DO VETOR =====");

                        int i = 0;
                        while (i < quantidade) {
                            System.out.println("Posicao " + i + ": " + numeros[i]);
                            i++;
                        }
                    }
                    break;

                case 8:
                    System.out.println("Programa encerrado.");
                    break;

                default:
                    System.out.println("Opcao invalida! Escolha uma opcao de 1 a 8.");
            }
        }

        scanner.close();
    }
}