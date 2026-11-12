
/* sweep */

void ChatInput_Draw(void)

{
  undefined1 local_c8 [200];
  
  Gfx_Lock(1);
  Ui_DrawBox(DAT_005b9214,0x14,0xf0,600,0x28,0x80,DAT_005b90c0,&DAT_005b9224,0xffff00,0x10000,2);
  str_sprintf(local_c8,&PTR_DAT_00534258,&DAT_005b90c4);
  Text_DrawAligned(local_c8,DAT_005b90c0,0x1e,0x108,0xffffff,0xffff,0x10000,2);
  return;
}

