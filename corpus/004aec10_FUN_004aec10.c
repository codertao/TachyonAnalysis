
void FUN_004aec10(undefined4 param_1,undefined4 *param_2,int param_3,uint param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar7 = (char *)*param_2;
  uVar2 = *(undefined2 *)(param_2 + 2);
  uVar3 = *(ushort *)(param_2 + 3);
  uVar5 = (uint)*(ushort *)((int)param_2 + 10);
  if (((-1 < param_3) && (-1 < (int)param_4)) && (pcVar7 != (char *)0x0)) {
    if (param_4 == 0) {
      uVar4 = (uint)*(ushort *)((int)param_2 + 6);
      uVar6 = uVar4 - param_3;
    }
    else {
      uVar4 = (uint)*(ushort *)((int)param_2 + 6);
      uVar6 = uVar4 - param_3;
      if (((int)param_4 <= (int)uVar6) && (uVar6 = param_4, (int)uVar4 < (int)param_4)) {
        uVar6 = uVar4;
      }
    }
    if ((0 < (int)uVar6) && (param_3 <= (int)uVar4)) {
      for (; param_3 != 0; param_3 = param_3 + -1) {
        uVar4 = 0xffffffff;
        pcVar8 = pcVar7;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar7 = pcVar7 + ~uVar4;
      }
      do {
        FUN_004ae1a0(pcVar7,param_1,uVar2,uVar5,param_5,param_6,param_7);
        uVar4 = 0xffffffff;
        pcVar8 = pcVar7;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar7 = pcVar7 + ~uVar4;
        uVar5 = uVar5 + uVar3;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}

