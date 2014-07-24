#window

from PyQt4.QtCore import *
from PyQt4.QtGui import *

import sys

class Window(QWidget):
    def __init__(self):
        QWidget.__init__(self)

        self.layout = QVBoxLayout()

        self.tabs = QTabWidget()

        self.manual_line = LineMode()
        self.manual_button = ButtonMode()
        self.auto_mode = AutoMode()

        self.tabs.addTab(self.manual_line, "Command line")
        self.tabs.addTab(self.manual_button, "Manual")
        self.tabs.addTab(self.auto_mode, "Auto")

        self.layout.addWidget(self.tabs)

        self.setLayout(self.layout)


class LineMode(QWidget):
    def __init__(self):
        QWidget.__init__(self)

        self.layout = QGridLayout()

        self.sended = QTextEdit()
        self.sended.setReadOnly(True)
        self.layout.addWidget(self.sended, 0,0,1,0)
        
        self.text_to_send = QLineEdit()
        self.layout.addWidget(self.text_to_send, 2, 0, 2, 0)

        self.setLayout(self.layout)

class ButtonMode(QWidget):
    def __init__(self):
        QWidget.__init__(self)
        
        self.layout = QGridLayout()

        self.btn_x_plus = QPushButton(text="X+")
        self.btn_x_minus = QPushButton(text="X-")
        self.btn_y_plus = QPushButton(text="Y+")
        self.btn_y_minus = QPushButton(text="Y-")
        self.btn_z_plus = QPushButton(text="Z+")
        self.btn_z_minus = QPushButton(text="Z-")


        self.layout.addWidget(self.btn_x_plus, 2, 1)
        self.layout.addWidget(self.btn_x_minus, 2, 3)
        self.layout.addWidget(self.btn_y_plus, 1, 2)
        self.layout.addWidget(self.btn_y_minus, 3, 2)
        self.layout.addWidget(self.btn_z_plus, 1, 4)
        self.layout.addWidget(self.btn_z_minus, 3, 4)

        self.setLayout(self.layout)

class AutoMode(QWidget):
    def __init__(self):
        QWidget.__init__(self)

        self.layout = QGridLayout()



if __name__ == '__main__':
    app = QApplication(sys.argv)

    fen = Window()
    fen.show()
    app.exec()
