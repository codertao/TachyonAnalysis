
/* sweep: guess */

void __fastcall
Bmp_Convert24to16(undefined4 param_1,uint param_2,undefined2 *param_3,byte *param_4,int param_5)

{
  uint in_EAX;
  uint uVar1;
  
  if (0 < param_5) {
    do {
      uVar1 = CONCAT22((short)(param_2 >> 0x10),(ushort)(param_4[1] >> (8U - DAT_00603130 & 0x1f)))
              << ((byte)DAT_00603124 & 0x1f);
      param_2 = CONCAT22((short)(uVar1 >> 0x10),(ushort)(param_4[2] >> (8U - DAT_0060312c & 0x1f)))
                << ((byte)DAT_00603120 & 0x1f);
      in_EAX = CONCAT22((short)(in_EAX >> 0x10),(ushort)(*param_4 >> (8U - DAT_00603134 & 0x1f))) <<
               ((byte)DAT_00603128 & 0x1f) | uVar1 | param_2;
      param_4 = param_4 + 3;
      *param_3 = (short)in_EAX;
      param_5 = param_5 + -1;
      param_3 = param_3 + 1;
    } while (param_5 != 0);
  }
  return;
}

