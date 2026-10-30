
void FUN_0041dae0(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  
  FUN_0048e3d0(param_1,param_2[2],4,s_object_descriptor_00535200,param_2[3]);
  pcVar8 = (char *)*param_1;
  uVar2 = 0xffffffff;
  pcVar5 = (char *)*param_2;
  do {
    pcVar7 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar7 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar7;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar7 + -uVar2;
  for (uVar3 = uVar2 >> 2; pcVar8 = pcVar8 + 4, uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar8 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(undefined4 *)*param_1 = param_2[1];
  *(undefined4 *)(*param_1 + 0x14) = param_3;
  puVar6 = param_2 + 4;
  puVar9 = (undefined4 *)(*param_1 + 0x20);
  for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  return;
}

