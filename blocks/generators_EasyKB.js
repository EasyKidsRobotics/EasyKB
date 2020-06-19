Blockly.JavaScript['easykbbegin'] = function(block) {
  var text_adds = block.getFieldValue('ADDS');
  // TODO: Assemble JavaScript into code variable.
  var code =
      `
#EXTINC#include <Wire.h>#END
#EXTINC#include <EasyKB.h>#END

#VARIABLE
EasyKB KB1;
#END
KB1.begin(0x42);
\n
`;
  return code;
};

Blockly.JavaScript['easykb_setuppin'] = function(block) {
  var dropdown_pinio = block.getFieldValue('PINIO');
  var dropdown_mode = block.getFieldValue('MODE');
  // TODO: Assemble JavaScript into code variable.
  var code = `KB1.setuppin(${dropdown_pinio},${dropdown_mode});\n`;
  return code;
};

Blockly.JavaScript['easykb_writeio'] = function(block) {
  var dropdown_easykb_writeiopin = block.getFieldValue('EasyKB WriteIOPIN');
  var dropdown_logic = block.getFieldValue('Logic');
  // TODO: Assemble JavaScript into code variable.
  var code = `KB1.WriteIO(${dropdown_easykb_writeiopin},${dropdown_logic});\n`;
  return code;
};

Blockly.JavaScript['easykb_readadc'] = function(block) {
  var dropdown_pinadc = block.getFieldValue('PINADC');
  // TODO: Assemble JavaScript into code variable.
  var code = `KB1.Readadc(${dropdown_pinadc})`;
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};

Blockly.JavaScript['easykb_readadcmv'] = function(block) {
  var dropdown_pinadc = block.getFieldValue('PINADC');
  // TODO: Assemble JavaScript into code variable.
  var code = `KB1.ReadadcmV(${dropdown_pinadc})`;
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};

Blockly.JavaScript['easykb_readio'] = function(block) {
  var dropdown_pinreadio = block.getFieldValue('PINReadIO');
  // TODO: Assemble JavaScript into code variable.
  var code = `KB1.ReadIO(${dropdown_pinreadio})`;
  // TODO: Change ORDER_NONE to the correct strength.
  return [code, Blockly.JavaScript.ORDER_NONE];
};

Blockly.JavaScript['easykb_pwmwrite'] = function(block) {
  var dropdown_pwmpin = block.getFieldValue('PWMPIN');
  var value_easykb_pwmwritevalue = Blockly.JavaScript.valueToCode(block, 'EasyKB PWMwritevalue', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  var code = `KB1.PWMwrite(${dropdown_pwmpin},${value_easykb_pwmwritevalue});\n`;
  return code;
};

Blockly.JavaScript['easykb_motor'] = function(block) {
  var value_easykb_motor = block.getFieldValue('EasyKB MotorNumber');
  var value_easykb_motor1dir = block.getFieldValue('EasyKB MotorDIR');
  var value_easykb_motor1speed = Blockly.JavaScript.valueToCode(block, 'EasyKB MotorSPEED', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  var code = `KB1.Motor${value_easykb_motor}(${value_easykb_motor1dir},${value_easykb_motor1speed});\n`;
  return code;
};

Blockly.JavaScript['easykb_extmotor'] = function(block) {
  var value_easykb_extmotor = block.getFieldValue('EasyKB extMotorNumber');
  var value_easykb_extmotor1dir = block.getFieldValue('EasyKB extMotorDIR');
  var value_easykb_extmotor1speed = Blockly.JavaScript.valueToCode(block, 'EasyKB extMotorSPEED', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  var code = `KB1.Motor${value_easykb_extmotor}(${value_easykb_extmotor1dir},${value_easykb_extmotor1speed});\n`;
  return code;
};

Blockly.JavaScript['easykb_motor_stop'] = function(block) {
  var value_easykb_motorstop = block.getFieldValue('EasyKB MotorStop');
  // TODO: Assemble JavaScript into code variable.
  var code = `KB1.Motor${value_easykb_motorstop}(0,0);\n`;
  return code;
};

Blockly.JavaScript['easymotorstopall'] = function(block) {
  // TODO: Assemble JavaScript into code variable.
  var code = `KB1.Motor1(0,0);KB1.Motor2(0,0);KB1.Motor3(0,0);KB1.Motor4(0,0);\n`;
  return code;
};

Blockly.JavaScript['easykb_servowritem'] = function(block) {
  var dropdown_pinservo = block.getFieldValue('PINServo');
  var value_easykb_servowritemvalue = Blockly.JavaScript.valueToCode(block, 'EasyKB ServowriteMvalue', Blockly.JavaScript.ORDER_ATOMIC);
  // TODO: Assemble JavaScript into code variable.
  var code = `KB1.ServowriteM(${dropdown_pinservo},${value_easykb_servowritemvalue});\n`;
  return code;
};
