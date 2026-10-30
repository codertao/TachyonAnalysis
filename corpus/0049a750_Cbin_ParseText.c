
/* plaintext fallback parser (same group/entry/param model) */

void Cbin_ParseText(undefined4 *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  iVar5 = param_1[1];
  pcVar2 = (char *)*param_1;
  param_1[7] = 0;
  if (0 < iVar5) {
    do {
      if ((*pcVar2 == '\r') && (pcVar2[1] == '\n')) {
        *pcVar2 = '\n';
        pcVar2[1] = '\0';
        param_1[4] = param_1[4] + 1;
      }
      if (*pcVar2 == '\t') {
        *pcVar2 = ' ';
      }
      pcVar2 = pcVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  FUN_0049a340(param_1);
  puVar1 = (undefined4 *)FUN_0049c7d0(param_1[0xd],s_label_strings_0055d798);
  uVar4 = param_1[0xd];
  param_1[0x17] = puVar1;
  param_1[0x16] = puVar1;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  FUN_0049a1e0(param_1);
  FUN_0049a3e0(param_1);
  puVar1 = (undefined4 *)FUN_0049c7d0(param_1[0xb] * 0x14,s_element_structs_0055d788);
  param_1[0x11] = puVar1;
  param_1[0x10] = puVar1;
  for (uVar4 = param_1[0xb] * 5 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  puVar1 = (undefined4 *)FUN_0049c7d0(param_1[0xe],s_element_strings_0055d778);
  uVar4 = param_1[0xe];
  param_1[0x19] = puVar1;
  param_1[0x18] = puVar1;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  FUN_0049a430(param_1);
  FUN_0049a480(param_1);
  puVar1 = (undefined4 *)FUN_0049c7d0(param_1[0xc] * 0x14,s_data_structs_0055d768);
  param_1[0x13] = puVar1;
  param_1[0x12] = puVar1;
  for (uVar4 = param_1[0xc] * 5 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  puVar1 = (undefined4 *)FUN_0049c7d0(param_1[0xf],s_data_strings_0055d758);
  uVar4 = param_1[0xc];
  param_1[0x15] = puVar1;
  param_1[0x14] = puVar1;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  FUN_0049a590(param_1);
  param_1[7] = 1;
  return;
}

