import argparse

parser = argparse.ArgumentParser(
    description="Descrição do seu programa")
parser.add_argument("file_path", type=str,
                    help="Caminho para o arquivo externo")
args = parser.parse_args()
with open(args.file_path, "r", encoding="utf8") as file:
    conteudo = file.read()
    print(conteudo)
