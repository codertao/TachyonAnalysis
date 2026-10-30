
undefined8 __fastcall FUN_0048e870(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 local_6;
  
  uVar1 = param_3 ^ (int)param_3 >> 0x1f;
  uVar2 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  uVar2 = uVar2 - 0xf & ~((int)(CONCAT14(uVar2 < 0xf,param_2) >> 1) >> 0x1f);
  uVar1 = uVar1 >> ((byte)uVar2 & 0x1f | 1);
  local_6 = (ushort)uVar1 & 0xfff0 | (ushort)uVar2 & 0xe | (ushort)((int)param_3 >> 0x1f) >> 0xf;
  return CONCAT44(param_2,CONCAT22((short)(uVar1 >> 0x10),local_6));
}

