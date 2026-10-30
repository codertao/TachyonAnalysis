
void FUN_004260c0(int param_1,int param_2,undefined4 param_3,char *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar2 = DcbPool_Alloc(&DAT_005b32b0,10,&DAT_005b31c0);
  if (iVar2 != 0) {
    FUN_0041b850(iVar2);
    *(int *)(iVar2 + 0x8c) = param_2;
    *(undefined4 *)(iVar2 + 0xd0) = 0;
    *(code **)(iVar2 + 0x70) = FUN_00425d60;
    *(code **)(iVar2 + 0x5c) = FUN_00425c10;
    *(int *)(iVar2 + 0x60) = iVar2;
    *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_2 + 0x128);
    *(undefined1 *)(iVar2 + 0x7e) = *(undefined1 *)(param_2 + 0x120);
    *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0x2c) = 0xff;
    *(undefined4 *)(iVar2 + 0x68) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    *(undefined4 *)(iVar2 + 0x88) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0x90;
    *(undefined4 *)(iVar2 + 0x1c) = 0x10000;
    *(undefined4 *)(iVar2 + 0x80) = 0;
    *(int *)(iVar2 + 0xd4) = param_1;
    *(int *)(param_1 + 0xd8) = iVar2;
    *(undefined4 *)(iVar2 + 0xb8) = 0;
    *(undefined4 *)(iVar2 + 0xbc) = 0;
    FUN_0045cda0(iVar2,&DAT_005b31d4);
    *(undefined4 *)(iVar2 + 0x110) = param_5;
    uVar3 = 0xffffffff;
    *(undefined4 *)(iVar2 + 0xe8) = param_3;
    *(undefined4 *)(iVar2 + 0xe4) = param_6;
    do {
      pcVar5 = param_4;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = param_4 + 1;
      cVar1 = *param_4;
      param_4 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5 + -uVar3;
    pcVar6 = (char *)(iVar2 + 0xf8);
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_00425fe0(iVar2,param_2);
    FUN_004b2950((undefined4 *)(iVar2 + 0x18),0);
  }
  return;
}

