
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Starbase_InitUi(void)

{
  int iVar1;
  
  clr_bytes(&DAT_00587900,0x90);
  Map_SetRegion(0);
  _DAT_0058794c = load_box_file(s_borders_box_0053365c,0xa100);
  PolyFont_Load(s_shdw_10_pcx_00534eb0,&DAT_00587958,0x20000,0xa100);
  iVar1 = Mnu_FindFont(&GLBL_UI_ELEM_LIST,s_SMALL320_0054b0a8);
  _DAT_00587954 = *(undefined4 *)(iVar1 + 0x238);
  MenuHotkey_SetUp(&LAB_0046f4a0);
  MenuHotkey_SetDown(&LAB_0046f4b0);
  MenuHotkey_SetLeft(&LAB_0046f480);
  MenuHotkey_SetRight(&LAB_0046f490);
  return;
}

