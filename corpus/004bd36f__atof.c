
/* CRT */

float10 _atof(byte *param_1)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_1c [24];
  
  while( true ) {
    if (DAT_00561464 < 2) {
      uVar1 = (byte)PTR_DAT_00561258[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar1 = Crt_isctype(*param_1,8);
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar5 = 0;
  uVar4 = 0;
  sVar2 = _strlen((char *)param_1);
  iVar3 = __fltin2(local_1c,param_1,sVar2,uVar4,uVar5);
  return (float10)*(double *)(iVar3 + 0x10);
}

