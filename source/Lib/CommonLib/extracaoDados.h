//RAMIRO, IAGO e ROGÉRIO - VTM 19.0 - Aceleração da Intra-Quadro 360 - Implementação da DT Modelo 2

#ifndef EXTRACAODADOS_H
#define EXTRACAODADOS_H

#include <fstream>
#include <string.h>
#include <map>
#include "EncoderLib/IntraSearch.h"

using namespace std;

class extracaoDados {
public:
    

    static ofstream arqTempos;
    static ofstream arqBlocos;
    static ofstream arqblocosEscolidos;

    /*Variáveis EncAppCfg.cpp*/
    static string nameVideo;
    static int numQp;
    static int numFrames;
    static int widthVideo;
    static int heightVideo;
    static float tempoClock;
    static float tempoTime;

    
    //RAMIRO: Features imagem
    static int sum;
    static double media; 
    static double vari;
    static unsigned short gradH;
    static unsigned short gradV;
    static double razao_grad;
    static unsigned short CTUPixel[128][128];
    static double grad_razao_pixels;
    static double desvioPadrao;
    
  
    //RAMIRO: Features Iago
    static float gama;
    static float gama_H;
    static float gama_H_1;
    static float phi;
    static float cos_1;
    static float WSPSNR;
    static float RD_cost;
    static float SAD_ang;
    static float SATD_ang;
    static float SAD_MIP;
    static float SATD_MIP;

    /*
    //RAMIRO: features Adson
    static float rmd_cost_planar;
    static float rmd_cost_dc;
    static float rmd_cost_ang;
    static float rdo_cost_planar;
    static float rdo_cost_dc;
    static float rdo_cost_ang_h;
    static float rdo_cost_ang_v;
    static float rdo_cost_mip;
    static float rdo_cost_isp_h;
    static float rdo_cost_isp_v;
    */

    //RAMIRO
    #if EXTRA_FEATURES   
        //inicio funções DT
        static int aplicaDT_BlocosVerticais(double features_360_model_2[25]);
        //fim funções DT
    #endif
   
    /*Variáveis controle*/
    static int flagBDOFInter;
    static int flagBDOFmerge;

#if EXTRA_FEATURES
    static ofstream arqFeatures;
    
    //variáveis features
    static int QP;
    static int depth;
    static int qtDepth;
    static int mtDepht;
    static int videoWidth;
    static int videoHeight;
    static int cuPosX;
    static int cuPosY;
    static int cuWidth;
    static int cuHeight;
    static int BestAngularMode;
    static int Best_Block_Ang_V;
    static int BestPartitioning;
    static int Best_Block_H;
    //fim variáveis features

    //funções fetures
    static void setQP(int _QP);
    static void setDepth(int _depth);
    static void setQtDepth(int _qtDepth);
    static void setMtDepht(int _mtDepth);
    static void setVideoWidth(int _videoWidth);
    static void setVideoHeight(int _videoHeight);
    static void setCuPosX(int _cuPosX);
    static void setCuPosY(int _cuPosY);
    static void setCuWidth(int _cuWidth);
    static void setCuHeight(int _cuHeight);
    static void setGama(float _gama);
    static void setGama_H(float _gama_H);
    static void setGama_H_1(float _gama_H_1);
    static void setCos_1(float _cos_1);
    static void setWSPSNR(float _WSPSNR);
    static void setRD_cost(float _RD_cost);
    static void setSAD_ang(float _SAD_ang);
    static void setSATD_ang(float _SATD_ang);
    static void setSAD_MIP(float _SAD_MIP);
    static void setSATD_MIP(float _SATD_MIP);
    //static void set_rmd_cost_planar(float _rmd_cost_planar);
    //static void set_rmd_cost_dc(float _rmd_cost_dc);
    //static void set_rmd_cost_ang(float _rmd_cost_ang);
    //static void set_rdo_cost_planar(float _rdo_cost_planar);
    //static void set_rdo_cost_dc(float _rdo_cost_dc);
    //static void set_rdo_cost_ang_h(float _rdo_cost_ang_h);
    //static void set_rdo_cost_ang_v(float _rdo_cost_ang_v);
    //static void set_rdo_cost_mip(float _rdo_cost_mip);
    //static void set_rdo_cost_isp_h(float _rdo_cost_isp_h);
    //static void set_rdo_cost_isp_v(float _rdo_cost_isp_v);
    static void setBestAngularMode(int _BestAngularMode);
    static void setBest_Block_Ang_V(int _Best_Block_Ang_V);
    static void setBestPartitioning(int _BestPartitioning);
    static void setBest_Block_H(int _Best_Block_H);
    static void registraFeatures();
    static void inicializaFeatures();
    //fim funções features    
    
#endif


//RAMIRO: Features imagem
static void extractCUPixel(CodingStructure* cs, PartSplit split, Partitioner* partitioner);
static double variance(int xTL, int yTL, int xBR, int yBR, int varSum);
static vector<unsigned short > gradients(int xTL, int yTL, int xBR, int yBR);

    
    extracaoDados(string _nameVideo, int _numQP,int _numFrames, int _widthVideo, int _heightVideo);
    static void criarArquivo();

    static void registraTempo(string _funcao, float _tempoClock); 

    static void resgistraDadosBlocos(string _nomeFuncao, map<string,long int>_mapTamBlocos, map<string,long int>_mapTemBlocos, int _totalNumBlocos, float _totalTemBlocos, string _tamanhosCU[], int _tamVetor);
    static string convertePontoVirgula(string _valor);
    static void salvaBlocosEscolhidos(CodingStructure *&bestCS);
    
    virtual ~extracaoDados();
private:

};

#endif /* EXTRACAODADOS_H */

