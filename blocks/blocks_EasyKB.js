Blockly.Blocks['easykbbegin'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("EasyKB: Setup")
        //.appendField(new Blockly.FieldTextInput("0x42"), "ADDS");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['easykb_setuppin'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("EasyKB: Setup Pin")
        .appendField(new Blockly.FieldDropdown([["D1","D1"], ["D2","D2"], ["D3","D3"], ["D4","D4"], ["D5","D5"], ["D6","D6"]]), "PINIO")
        .appendField(new Blockly.FieldDropdown([["INPUT","DImode"], ["OUTPUT","DOmode"]]), "MODE");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['easykb_writeio'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("EasyKB: DigitalWrite")
        .appendField(new Blockly.FieldDropdown([["D1","D1"], ["D2","D2"], ["D3","D3"], ["D4","D4"], ["D5","D5"], ["D6","D6"], ["DIR1","DIR1"], ["DIR2","DIR2"], ["DIR3","DIR3"], ["DIR4","DIR4"]]), "EasyKB WriteIOPIN")
        this.appendDummyInput()
        .appendField("to")
        .appendField(new Blockly.FieldDropdown([["0","0"], ["1","1"]]), "Logic");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['easykb_readio'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("EasyKB: DigitalRead")
        .appendField(new Blockly.FieldDropdown([["D1","D1"], ["D2","D2"], ["D3","D3"], ["D4","D4"], ["D5","D5"], ["D6","D6"]]), "PINReadIO");
    this.setInputsInline(true);
    this.setOutput(true, "Number");
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['easykb_readadc'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("EasyKB: AnalogRead")
        .appendField(new Blockly.FieldDropdown([["A0","A0"], ["A1","A1"], ["A2","A2"], ["A3","A3"], ["A4","A4"], ["A5","A5"], ["A6","A6"], ["A7","A7"], ["A8","A8"], ["A9","A9"]]), "PINADC");
    this.setInputsInline(true);
    this.setOutput(true, "Number");
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['easykb_readadcmv'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("EasyKB: ReadADC(mV)")
        .appendField(new Blockly.FieldDropdown([["A0","A0"], ["A1","A1"], ["A2","A2"], ["A3","A3"], ["A4","A4"], ["A5","A5"], ["A6","A6"], ["A7","A7"], ["A8","A8"], ["A9","A9"]]), "PINADC");
    this.setInputsInline(true);
    this.setOutput(true, "Number");
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['easykb_motor'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("EasyKB: DC Motor")
        .appendField(new Blockly.FieldDropdown([["1","1"], ["2","2"]]), "EasyKB MotorNumber");
    this.appendDummyInput()
        .appendField("Direction")
        .appendField(new Blockly.FieldDropdown([["Forward","0"], ["Backward","1"]]), "EasyKB MotorDIR");
    this.appendValueInput("EasyKB MotorSPEED")
        .setCheck(null)
        .appendField("Speed");
    this.appendDummyInput()
        .appendField("% [ 0-100 ]");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['easykb_extmotor'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("EasyKB: External Motor Drive")
        .appendField(new Blockly.FieldDropdown([["3","3"], ["4","4"]]), "EasyKB extMotorNumber");
    this.appendDummyInput()
        .appendField("Direction")
        .appendField(new Blockly.FieldDropdown([["Forward","0"], ["Backward","1"]]), "EasyKB extMotorDIR");
    this.appendValueInput("EasyKB extMotorSPEED")
        .setCheck(null)
        .appendField("Speed");
    this.appendDummyInput()
        .appendField("% [ 0-100 ]");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['easykb_motor_stop'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("EasyKB: Motor Stop")
        .appendField(new Blockly.FieldDropdown([["1","1"], ["2","2"],["3","3"], ["4","4"], ["All","5"]]), "EasyKB MotorStop");
    this.setColour(230);
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};

Blockly.Blocks['easykb_servowritem'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("EasyKB: Servo Motor")
        .appendField(new Blockly.FieldDropdown([["Servo1","Servo1"], ["Servo2","Servo2"], ["Servo3","Servo3"]]), "PINServo");
        this.appendDummyInput()
        .appendField("Degree");
        this.appendValueInput("EasyKB ServowriteMvalue")
        .setCheck(null);
        this.appendDummyInput()
        .appendField("[ 0-180 ]");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};