// -*-  mode: c    ; coding: koi8   -*- ----------------------------------------

/*******************************************************************************
 *                                                                             *
 *  ��� ����� �����: evalut.h                                                  *
 *                                                                             *
  ******************************************************************************
 */  

#ifdef __cplusplus                                                               
extern "C" {                                                                     
#endif                                                                                     
/******************************************************************************/   


int   
goga_get_move (GO_GAME *g, GO_WORK *w, int *i_move, int *j_move, GO_STONE stone/* , GO_MOVES *mvs */) ;

int aigo_findmoves (long pstr, long posi, long *p_moves);
int aigo_evaluate (long user, long posi/* , int numlev, int gamer_color */);

/******************************************************************************/   

#ifdef __cplusplus                                                               
}                                                                                
#endif                                                                           
/******************************************************************************/   
