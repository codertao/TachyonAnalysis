
/* sweep */

void ChatInput_Init(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  clr_bytes(&DAT_005b90c0,0x1a8);
  clr_bytes(&DAT_005b9268,4);
  clear_cheats();
  DAT_005b90c0 = load_font(s_lcd_10_pcx_00533674,0x20000);
  uVar2 = 0xffffffff;
  pcVar4 = param_1;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)&DAT_005b91d0;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  DAT_005b9210 = Str_LenInline(param_1);
  DAT_005b9214 = load_box_file(s_borders_box_0053365c,0xcccc);
  return;
}

