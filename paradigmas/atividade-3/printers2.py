# printers.py

from abc import ABC, abstractmethod

class Printer(ABC):
    @abstractmethod
    def print(self, document):
        pass

class Fax(ABC):
    @abstractmethod
    def fax(self, document):
        pass

class Scanner(ABC):
    @abstractmethod
    def scan(self, document):
        pass

class OldPrinter(Printer):
    def print(self, document):
        print(f"Imprimindo {document} em preto e branco...")

class NewPrinter(Printer, Fax, Scanner):
    def print(self, document):
        print(f"Imprimindo {document} em cores...")

    def fax(self, document):
        print(f"Enviando fax de {document}...")

    def scan(self, document):
        print(f"Escaneando {document}...")
