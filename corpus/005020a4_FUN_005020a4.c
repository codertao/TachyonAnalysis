
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall
FUN_005020a4(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,ushort *param_5,
            int param_6,uint param_7)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 in_EAX;
  undefined *puVar5;
  
  DAT_004ec078 = param_3;
  _DAT_004ec07c = param_4;
  DAT_004ec080 = param_5;
  _DAT_004ec084 = param_6;
  _DAT_004ec088 = param_7;
  _DAT_004ec090 = param_7 & 0x70;
  DAT_004ec094 = param_7 & 7;
  DAT_004ec098 = param_7 & 0x700;
  DAT_004ec09c = param_7 & 0x7000;
  _DAT_004ec0a0 = 0xffffffff;
  if ((param_7 & 0x20000) == 0) {
    _DAT_004ec0a0 = 0xffffff;
  }
  if ((param_7 & 0x10000) == 0) {
    _DAT_004ec0a0 = _DAT_004ec0a0 & 0xffffff00;
  }
  puVar5 = &DAT_004ec0a4;
  do {
    fVar2 = param_3[1] * _DAT_004ec060;
    fVar3 = param_3[2] * _DAT_004ec064;
    *(int *)(puVar5 + 0x18) = (int)ROUND(*param_3 * _DAT_004ec060);
    *(int *)(puVar5 + 0x1c) = (int)ROUND(fVar2);
    *(int *)(puVar5 + 0x14) = (int)ROUND(fVar3);
    *(int *)(puVar5 + 0x20) = (int)ROUND(param_3[6] * _DAT_004ec06c);
    *(int *)(puVar5 + 0x24) = (int)ROUND(param_3[7] * _DAT_004ec06c);
    *(int *)(puVar5 + 0x14) = 0x40000000 - *(int *)(puVar5 + 0x14);
    *(uint *)(puVar5 + 0x28) =
         ((uint)*(byte *)(param_3 + 4) << 0x10 | (uint)param_3[5] & 0xff0000ff ^ 0xff000000) &
         _DAT_004ec0a0;
    iVar4 = _DAT_004ec07c;
    param_3 = param_3 + 10;
    puVar5 = puVar5 + 0x2c;
    _DAT_004ec07c = _DAT_004ec07c + -1;
  } while (_DAT_004ec07c != 0 && 0 < iVar4);
  if (DAT_004ec098 == 0x400) {
    if (DAT_004ec09c == 0x5000) {
      DAT_004e4a28 = 8;
    }
    else if (DAT_004ec09c == 0x2000) {
      DAT_004e4a28 = 0x1000008;
    }
    else if (DAT_004ec094 == 2) {
      DAT_004e4a28 = 0x100008;
    }
    else if (DAT_004ec094 == 1) {
      DAT_004e4a28 = 0x2000008;
    }
    else {
      DAT_004e4a28 = 8;
    }
  }
  else if (DAT_004ec098 == 0x600) {
    if (DAT_004ec09c == 0x5000) {
      DAT_004e4a28 = 0x19;
    }
    else if (DAT_004ec09c == 0x2000) {
      DAT_004e4a28 = 0x1000008;
    }
    else if (DAT_004ec094 == 2) {
      DAT_004e4a28 = 0x200008;
    }
    else {
      DAT_004e4a28 = 9;
    }
  }
  else if (DAT_004ec09c == 0x1000) {
    DAT_004e4a28 = 0x20008;
  }
  else {
    DAT_004e4a28 = 4;
  }
  if ((_DAT_004ec088 & 0x100000) != 0) {
    DAT_004e4a28 = DAT_004e4a28 | 0x10000000;
  }
  if ((_DAT_004ec088 & 0x200000) != 0) {
    DAT_004e4a28 = DAT_004e4a28 | 0x20000000;
  }
  if ((_DAT_004ec088 & 0x800000) != 0) {
    DAT_004e4a28 = DAT_004e4a28 | 0x2000;
  }
  do {
    uVar1 = *DAT_004ec080;
    DAT_004ec080 = DAT_004ec080 + 3;
    if ((((DAT_004e4a28 & 0x200000) != 0) &&
        (DAT_004e4a2c = ((&DAT_004ec0cc)[(uint)uVar1 * 0xb] & 0xff0000) >> 0x10, DAT_0060f874 != 0))
       && (DAT_004e4a2c = DAT_004e4a2c * 2, 0xff < DAT_004e4a2c)) {
      DAT_004e4a2c = 0xff;
    }
    FUN_004e4bf0();
    _DAT_004ec084 = _DAT_004ec084 + -1;
  } while (_DAT_004ec084 != 0);
  return CONCAT44(param_2,in_EAX);
}

