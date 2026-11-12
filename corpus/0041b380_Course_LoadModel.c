
/* sweep */

void Course_LoadModel(char *param_1)

{
  if ((*param_1 != '\0') && (param_1[0x10] != '\0')) {
    ModelPool_Load(param_1 + 0x20,param_1,param_1 + 0x10,param_1 + 0x10,&g_ObjModelPool,1);
  }
  return;
}

