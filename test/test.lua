    package.cpath = package.cpath .. ';..\\build\\lib\\RelWithDebInfo\\?.dll'
    local QtCore = require 'qtcore'
    local QtGui = require 'qtgui'
    local QtWidgets = require 'qtwidgets'

    local app = QtWidgets.QApplication.new(select('#',...) + 1, {'lua', ...})

    local btn = QtWidgets.QPushButton.new("Hello World!")
    btn:connect('2pressed()', function(self)
        print("I'm about to close...")
        self:close()
    end)
    btn:setWindowTitle("A great example!")
    btn:resize(300,50)
    btn:show()

    app.exec()