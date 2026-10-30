
void FUN_0048bdd0(int param_1)

{
  uint3 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_1;
  iVar6 = param_1 * 0x170;
  iVar4 = (&DAT_0056acdc)[param_1 * 0x5c];
  iVar3 = *(int *)(&DAT_0056ac2c + iVar6);
  param_1 = *(int *)(&DAT_0056ac48 + iVar6);
  iVar5 = *(int *)(&DAT_0056ac30 + iVar6);
  if (iVar3 == iVar4) {
    *(undefined4 *)(&DAT_0056ac40 + iVar6) = 1;
  }
  for (; ((0 < iVar3 && (0 < iVar4)) &&
         ((&DAT_0056acf0)[iVar2 * 0x5c] = *(undefined4 *)(iVar5 + 0x24),
         *(int *)(iVar5 + 0x24) < (int)(&DAT_0056ac50)[iVar2 * 0x5c])); iVar5 = iVar5 + 0x30) {
    if ((&DAT_0056abcc)[iVar2 * 0x5c] == 0) {
      FUN_004e7194(*(undefined1 *)(iVar5 + 4),*(undefined1 *)(iVar5 + 3),*(undefined1 *)(iVar5 + 2),
                   *(undefined1 *)(iVar5 + 7),*(undefined1 *)(iVar5 + 6),*(undefined1 *)(iVar5 + 5))
      ;
      FUN_004e68ae(iVar5,*(undefined4 *)(&DAT_0056abc8 + iVar6),*(undefined4 *)(iVar5 + 0x20),
                   *(undefined4 *)(iVar5 + 0x24),0,0,0);
    }
    else {
      uVar1 = *(uint3 *)(iVar5 + 2);
      *(uint *)(&DAT_0056abf4 + iVar6) = (uint)*(uint3 *)(iVar5 + 5);
      FUN_004ae1a0(iVar5,(&DAT_0056abcc)[iVar2 * 0x5c],*(undefined4 *)(iVar5 + 0x20),
                   *(undefined4 *)(iVar5 + 0x24),(uint)uVar1,*(undefined4 *)(&DAT_0056abe8 + iVar6),
                   &DAT_0056abd8 + iVar6);
    }
    if (param_1 == *(int *)(iVar5 + 0x24)) {
      (&DAT_0056acfc)[iVar2 * 0x5c] = 0;
    }
    else {
      (&DAT_0056acfc)[iVar2 * 0x5c] = 1;
      param_1 = *(int *)(iVar5 + 0x24);
    }
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + -1;
  }
  return;
}

