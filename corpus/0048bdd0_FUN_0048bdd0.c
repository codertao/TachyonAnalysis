
void FUN_0048bdd0(int param_1)

{
  uint3 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *text;
  int iVar5;
  
  iVar2 = param_1;
  iVar5 = param_1 * 0x170;
  iVar4 = (&DAT_0056acdc)[param_1 * 0x5c];
  iVar3 = *(int *)(&DAT_0056ac2c + iVar5);
  param_1 = *(int *)(&DAT_0056ac48 + iVar5);
  text = *(char **)(&DAT_0056ac30 + iVar5);
  if (iVar3 == iVar4) {
    *(undefined4 *)(&DAT_0056ac40 + iVar5) = 1;
  }
  for (; ((0 < iVar3 && (0 < iVar4)) &&
         ((&DAT_0056acf0)[iVar2 * 0x5c] = *(undefined4 *)(text + 0x24),
         *(int *)(text + 0x24) < (int)(&DAT_0056ac50)[iVar2 * 0x5c])); text = text + 0x30) {
    if ((&DAT_0056abcc)[iVar2 * 0x5c] == 0) {
      Font_SetColorRamp((uint)(byte)text[4],(uint)(byte)text[3],(uint)(byte)text[2],
                        (uint)(byte)text[7],(uint)(byte)text[6],(uint)(byte)text[5]);
      call_Font_DrawStringClipped
                (text,*(void **)(&DAT_0056abc8 + iVar5),*(int *)(text + 0x20),*(int *)(text + 0x24),
                 0,0,0);
    }
    else {
      uVar1 = *(uint3 *)(text + 2);
      *(uint *)(&DAT_0056abf4 + iVar5) = (uint)*(uint3 *)(text + 5);
      FUN_004ae1a0(text,(&DAT_0056abcc)[iVar2 * 0x5c],*(undefined4 *)(text + 0x20),
                   *(undefined4 *)(text + 0x24),(uint)uVar1,*(undefined4 *)(&DAT_0056abe8 + iVar5),
                   &DAT_0056abd8 + iVar5);
    }
    if (param_1 == *(int *)(text + 0x24)) {
      (&DAT_0056acfc)[iVar2 * 0x5c] = 0;
    }
    else {
      (&DAT_0056acfc)[iVar2 * 0x5c] = 1;
      param_1 = *(int *)(text + 0x24);
    }
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + -1;
  }
  return;
}

