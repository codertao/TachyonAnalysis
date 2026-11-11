
void FUN_00450ab0(void *param_1,Pool *param_2)

{
  List_Remove(param_1,&param_2[1].mem);
  Pool_Free(param_2,param_1);
  param_2[1].freeHead = (void *)((int)param_2[1].freeHead + -1);
  return;
}

