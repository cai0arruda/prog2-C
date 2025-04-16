# printers.py

from abc import ABC, abstractmethod

class Printer(ABC):
    @abstractmethod
    def print(self, document):
        pass

    @abstractmethod
    def fax(self, document):
        pass

    @abstractmethod
    def scan(self, document):
        pass

class OldPrinter(Printer):
    def print(self, document):
        print(f"Imprimindo {document} em preto e branco...")

    def fax(self, document):
        raise NotImplementedError("Funcionalidade de fax não suportada")

    def scan(self, document):
        raise NotImplementedError("Funcionalidade de scanner não suportada")

class ModernPrinter(Printer):
    def print(self, document):
        print(f"Imprimindo {document} em cores...")

    def fax(self, document):
        print(f"Enviando fax de {document}...")

    def scan(self, document):
        print(f"Escaneando {document}...")
