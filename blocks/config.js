module.exports = [
    {
        name: "EasyKB",
        blocks: [
            {
                xml: `<sep gap="32"></sep><label text="EasyKB: GPIO" web-class="headline"></label>`
            },
            {
                xml:
                    `<block type="easykbbegin">
                     </block>
                     <block type="easykb_setuppin">
                     </block>
                     <block type="easykb_writeio">
                     </block>
                     <block type="easykb_readio">
                     </block>
                     <block type="easykb_readadc">
                     </block>`
            },

            {
                xml: `<sep gap="32"></sep><label text="EasyKB: DC Motor" web-class="headline"></label>`
            },
            {   
                xml:
                     `<block type="easykb_motor">
                        <value name="EasyKB MotorNumber">
                            <shadow type="math_number">
                                <field name="NUM">0</field>
                            </shadow>
                        </value>
                        <value name="EasyKB MotorDIR">
                            <shadow type="math_number">
                                <field name="NUM">0</field>
                            </shadow>
                        </value>
                        <value name="EasyKB MotorSPEED">
                            <shadow type="math_number">
                                <field name="NUM">50</field>
                            </shadow>
                        </value>
                     </block>`
            }, 
            {   
                xml:
                     `<block type="easykb_extmotor">
                        <value name="EasyKB extMotorNumber">
                            <shadow type="math_number">
                                <field name="NUM">0</field>
                            </shadow>
                        </value>
                        <value name="EasyKB extMotorDIR">
                            <shadow type="math_number">
                                <field name="NUM">0</field>
                            </shadow>
                        </value>
                        <value name="EasyKB extMotorSPEED">
                            <shadow type="math_number">
                                <field name="NUM">50</field>
                            </shadow>
                        </value>
                     </block>`
            }, 
            {   
                xml:
		             `<block type="easykb_motor_stop">
                     </block>`
            },
            {   
                xml:
		             `<block type="easymotorstopall">
                     </block>`
            },
            {
                xml: `<sep gap="32"></sep><label text="EasyKB: Servo Motor" web-class="headline"></label>`
            },
            {   
                xml:
                     `<block type="easykb_servowritem">
                        <value name="EasyKB ServowriteMvalue">
                            <shadow type="math_number">
                                <field name="NUM">90</field>
                            </shadow>
                        </value>
                     </block>`
            },
        ]
    }
];