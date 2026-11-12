
/* sweep */

void KeyName_FromModifierBits(uint param_1)

{
  KeyName_FromModifier(param_1 & 0xfe00);
  return;
}

