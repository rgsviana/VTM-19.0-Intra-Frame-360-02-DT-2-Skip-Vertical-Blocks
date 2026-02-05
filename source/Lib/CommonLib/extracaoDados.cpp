//RAMIRO, IAGO e ROGÉRIO - VTM 19.0 - Aceleração da Intra-Quadro 360 - Implementação da DT Modelo 2

#include "extracaoDados.h"
#include <stdio.h>
#include <iostream>
#include "DT_360_Model_2.h"

using namespace std;

ofstream extracaoDados::arqTempos;
ofstream extracaoDados::arqBlocos;
ofstream extracaoDados::arqblocosEscolidos;

string extracaoDados::nameVideo;
int extracaoDados::numQp;
int extracaoDados::numFrames;
int extracaoDados::widthVideo;
int extracaoDados::heightVideo;


//RAMIRO: Features imagem
int extracaoDados::sum;
double extracaoDados::media; 
double extracaoDados::vari;
unsigned short extracaoDados::gradH;
unsigned short extracaoDados::gradV;
double extracaoDados::razao_grad;
unsigned short extracaoDados::CTUPixel[128][128];
double extracaoDados::grad_razao_pixels;
double extracaoDados::desvioPadrao;

#if EXTRA_FEATURES

    //Início funções DT Modelo 2
    int extracaoDados::aplicaDT_BlocosVerticais(double features_360_model_2[]){
        features_360_model_2[0]= numQp;
        features_360_model_2[16] = sum;
        features_360_model_2[17] = media;
        features_360_model_2[18] = vari;
        features_360_model_2[19] = gradH;
        features_360_model_2[20] = gradV;
        features_360_model_2[21] = razao_grad;
        features_360_model_2[22] = grad_razao_pixels;
        features_360_model_2[23] = desvioPadrao;
        
        int realiza_360_model_2 = 0;
        double pontoCorte = 0.5;

        double vetRetorno[2];
        DT_360_Model_2 dt;
        dt.score(features_360_model_2, vetRetorno);
        if(vetRetorno[1] >= pontoCorte){
            realiza_360_model_2 = 1;
        }
    return realiza_360_model_2;
    }

#endif

/*Variáveis controle*/
int extracaoDados::flagBDOFInter;
int extracaoDados::flagBDOFmerge;

#if EXTRA_FEATURES
    ofstream extracaoDados::arqFeatures;
    //variáveis features
    int extracaoDados::QP;
    int extracaoDados::depth;
    int extracaoDados::qtDepth;
    int extracaoDados::mtDepht;
    int extracaoDados::videoWidth;
    int extracaoDados::videoHeight;
    int extracaoDados::cuPosX;
    int extracaoDados::cuPosY;
    int extracaoDados::cuWidth;
    int extracaoDados::cuHeight;
    float extracaoDados::gama;
    float extracaoDados::gama_H;
    float extracaoDados::gama_H_1;
    float extracaoDados::cos_1;
    float extracaoDados::WSPSNR;
    float extracaoDados::RD_cost;
    float extracaoDados::SAD_ang;
    float extracaoDados::SATD_ang;
    float extracaoDados::SAD_MIP;
    float extracaoDados::SATD_MIP;
    /*
    float extracaoDados::rmd_cost_planar;
    float extracaoDados::rmd_cost_dc;
    float extracaoDados::rmd_cost_ang;
    float extracaoDados::rdo_cost_planar;
    float extracaoDados::rdo_cost_dc;
    float extracaoDados::rdo_cost_ang_h;
    float extracaoDados::rdo_cost_ang_v;
    float extracaoDados::rdo_cost_mip;
    float extracaoDados::rdo_cost_isp_h;
    float extracaoDados::rdo_cost_isp_v;
    */
    int extracaoDados::BestAngularMode;
    int extracaoDados::Best_Block_Ang_V;
    int extracaoDados::BestPartitioning;
    int extracaoDados::Best_Block_H;
    //fim variáveis features
    

    //funções features
    void extracaoDados::setQP(int _QP){ QP = _QP;}
    void extracaoDados::setDepth(int _depth){ depth = _depth; }
    void extracaoDados::setQtDepth(int _qtDepth){ qtDepth = _qtDepth; }
    void extracaoDados::setMtDepht(int _mtDepth){ mtDepht = _mtDepth; }
    void extracaoDados::setVideoWidth(int _videoWidth){ videoWidth = _videoWidth; }
    void extracaoDados::setVideoHeight(int _videoHeight){ videoHeight = _videoHeight; }
    void extracaoDados::setCuPosX(int _cuPosX){ cuPosX = _cuPosX; }
    void extracaoDados::setCuPosY(int _cuPosY){ cuPosY = _cuPosY; }
    void extracaoDados::setCuWidth(int _cuWidth){ cuWidth = _cuWidth; }
    void extracaoDados::setCuHeight(int _cuHeight){ cuHeight = _cuHeight; }
    void extracaoDados::setGama(float _gama){ gama = _gama; }
    void extracaoDados::setGama_H(float _gama_H){ gama_H = _gama_H; }
    void extracaoDados::setGama_H_1(float _gama_H_1){ gama_H_1 = _gama_H_1; }
    void extracaoDados::setCos_1(float _cos_1){ cos_1 = _cos_1; }
    void extracaoDados::setWSPSNR(float _WSPSNR){ WSPSNR = _WSPSNR; }
    void extracaoDados::setRD_cost(float _RD_cost){ RD_cost = _RD_cost; }
    void extracaoDados::setSAD_ang(float _SAD_ang){ SAD_ang = _SAD_ang; }
    void extracaoDados::setSATD_ang(float _SATD_ang){ SATD_ang = _SATD_ang; }
    void extracaoDados::setSAD_MIP(float _SAD_MIP){ SAD_MIP = _SAD_MIP; }
    void extracaoDados::setSATD_MIP(float _SATD_MIP){ SATD_MIP = _SATD_MIP; }
    //void extracaoDados::set_rmd_cost_planar(float _rmd_cost_planar){ rmd_cost_planar = _rmd_cost_planar; }
    //void extracaoDados::set_rmd_cost_dc(float _rmd_cost_dc){ rmd_cost_dc = _rmd_cost_dc; }
    //void extracaoDados::set_rmd_cost_ang(float _rmd_cost_ang){ rmd_cost_ang = _rmd_cost_ang; }   
    //void extracaoDados::set_rdo_cost_planar(float _rdo_cost_planar){ rdo_cost_planar = _rdo_cost_planar; }
    //void extracaoDados::set_rdo_cost_dc(float _rdo_cost_dc){ rdo_cost_dc = _rdo_cost_dc; }
    //void extracaoDados::set_rdo_cost_ang_h(float _rdo_cost_ang_h){ rdo_cost_ang_h = _rdo_cost_ang_h; }
    //void extracaoDados::set_rdo_cost_ang_v(float _rdo_cost_ang_v){ rdo_cost_ang_v = _rdo_cost_ang_v; }
    //void extracaoDados::set_rdo_cost_mip(float _rdo_cost_mip){ rdo_cost_mip = _rdo_cost_mip; }
    //void extracaoDados::set_rdo_cost_isp_h(float _rdo_cost_isp_h){ rdo_cost_isp_h = _rdo_cost_isp_h; }
    //void extracaoDados::set_rdo_cost_isp_v(float _rdo_cost_isp_v){ rdo_cost_isp_v = _rdo_cost_isp_v; }
    void extracaoDados::setBestAngularMode(int _BestAngularMode){ BestAngularMode = _BestAngularMode; }
    void extracaoDados::setBest_Block_Ang_V(int _Best_Block_Ang_V){ Best_Block_Ang_V = _Best_Block_Ang_V; }
    void extracaoDados::setBestPartitioning(int _BestPartitioning){ BestPartitioning = _BestPartitioning; }
    void extracaoDados::setBest_Block_H(int _Best_Block_H){ Best_Block_H = _Best_Block_H; }
    //fim funções features


//RAMIRO: Features imagem (inicio)
void extracaoDados::extractCUPixel(CodingStructure* cs, PartSplit split, Partitioner* partitioner)
{
  int xTL = partitioner->currArea().Y().topLeft().x;
  int yTL = partitioner->currArea().Y().topLeft().y;
  int xBR = partitioner->currArea().Y().bottomRight().x;
  int yBR = partitioner->currArea().Y().bottomRight().y;
  
  int height  = 0;
  int width   = 0;
  int soma     = 0;
  int pixelHeight = yBR - yTL + 1;
  int pixelWidth  = xBR - xTL + 1;

  for(int y = yTL; y <= yBR; y++)
  {
    for(int x = xTL; x <= xBR; x++)
    {
      CTUPixel[height][width] = cs->picture->getTrueOrigBuf().Y().at(x,y);
      soma += CTUPixel[height][width];
      width++;
    }
    height++;
    width = 0;
  }

  double var  = variance(0, 0, pixelWidth-1, pixelHeight-1, soma);
  int n       = (pixelHeight * pixelWidth);
  double mean = (double) soma / (double) n;
  
  vector<unsigned short> grads = gradients(0, 0, pixelWidth-1, pixelHeight-1);
  double ratioGrads            = (grads[1] != 0) ? (double) grads[0] / (double) grads[1] : -1;
  
  sum = soma;
  media = mean;
  vari = var;
  gradH = grads[0];
  gradV = grads[1];
  razao_grad = ratioGrads;
  grad_razao_pixels = ((double)grads[0] + (double)grads[1]) / (double)n;
  desvioPadrao = sqrt(var);
  
}

/*
int extracaoDados::dist(int mv_uni_L0_Hor_X, int mv_uni_L1_Hor_X, int mv_uni_L0_Ver_Y, int mv_uni_L1_Ver_Y)
{
	return abs(mv_uni_L0_Hor_X - mv_uni_L1_Hor_X) + abs(mv_uni_L0_Ver_Y - mv_uni_L1_Ver_Y);
}
*/

double extracaoDados::variance(int xTL, int yTL, int xBR, int yBR, int varSum)
{
  double var = 0;
  int varHeight  = yBR - yTL + 1;
  int varWidth   = xBR - xTL + 1;

  int n = (varHeight * varWidth);
  double mm = (double) varSum / (double) n;

  for(int i = yTL; i <= yBR; i++)
  {
    for(int j = xTL; j <= xBR; j++)
    {
      var += (CTUPixel[i][j] - mm) * (CTUPixel[i][j] - mm);
    }
  }
  
  return var / (double) n;
}

vector<unsigned short > extracaoDados::gradients(int xTL, int yTL, int xBR, int yBR)
{
  double sobelX[3][3] = 
	{
		{-1, 0, 1},
		{-2, 0, 2},
		{-1, 0, 1}
	};

	double sobelY[3][3] = 
	{
		{-1, -2, -1},
		{0, 0, 0},
		{1, 2, 1}
	};

	unsigned short GX = 0;
	unsigned short GY = 0;

  int gradHeight  = yBR - yTL + 1;
  int gradWidth   = xBR - xTL + 1;

	//PADDING
	int heightPadding = gradHeight + 2;
	int widthPadding  = gradWidth + 2;
	unsigned short paddingImage[heightPadding][widthPadding] = {0};


	for(int i = yTL; i <= yBR; i++)
	{
		for(int j = xTL; j <= xBR; j++)
		{
			paddingImage[i+1-yTL][j+1-xTL] = CTUPixel[i][j];
			paddingImage[0][j+1-xTL] = CTUPixel[yTL][j];
			paddingImage[heightPadding - 1][j+1-xTL] = CTUPixel[yBR][j];
		}

		paddingImage[i+1-yTL][0] = CTUPixel[i][xTL];
		paddingImage[i+1-yTL][widthPadding - 1] = CTUPixel[i][xBR];
	}

	paddingImage[0][0] = CTUPixel[yTL][xTL];
	paddingImage[heightPadding - 1][0] = CTUPixel[yBR][xTL];
	paddingImage[0][widthPadding - 1] = CTUPixel[yTL][xBR];
	paddingImage[heightPadding - 1][widthPadding - 1] = CTUPixel[yBR][xBR];

  for(int i = 1; i < heightPadding - 1; i++)
  {
    for(int j = 1; j < widthPadding - 1; j++)
    {
      GX += (sobelX[0][0] * paddingImage[i-1][j-1])
          + (sobelX[0][1] * paddingImage[i-1][j])
          + (sobelX[0][2] * paddingImage[i-1][j+1])
          + (sobelX[1][0] * paddingImage[i][j-1])
          + (sobelX[1][1] * paddingImage[i][j])
          + (sobelX[1][2] * paddingImage[i][j+1])
          + (sobelX[2][0] * paddingImage[i+1][j-1])
          + (sobelX[2][1] * paddingImage[i+1][j])
          + (sobelX[2][2] * paddingImage[i+1][j+1]);

      GY += (sobelY[0][0] * paddingImage[i-1][j-1])
          + (sobelY[0][1] * paddingImage[i-1][j])
          + (sobelY[0][2] * paddingImage[i-1][j+1])
          + (sobelY[1][0] * paddingImage[i][j-1])
          + (sobelY[1][1] * paddingImage[i][j])
          + (sobelY[1][2] * paddingImage[i][j+1])
          + (sobelY[2][0] * paddingImage[i+1][j-1])
          + (sobelY[2][1] * paddingImage[i+1][j])
          + (sobelY[2][2] * paddingImage[i+1][j+1]);
    }
  }
  vector <unsigned short> grads;
  grads.push_back(GX);
  grads.push_back(GY);

  return grads;
}
//RAMIRO: Features imagem (fim)

    
    void extracaoDados::registraFeatures(){

    arqFeatures  
            << numQp                <<";"
            << depth                <<";"
            << qtDepth              <<";"
            << mtDepht              <<";"
            << videoWidth           <<";"
            << videoHeight          <<";"
            << cuPosX               <<";"
            << cuPosY               <<";"
            << cuWidth              <<";"
            << cuHeight             <<";"
            << gama                 <<";"
            << gama_H               <<";"
            << gama_H_1             <<";"
            << cos_1                <<";"
            << WSPSNR               <<";"
            << RD_cost              <<";"
            << SAD_ang              <<";"
            << SATD_ang             <<";"
            << SAD_MIP              <<";"
            << SATD_MIP             <<";"
            /*
            << rmd_cost_planar      <<";"
            << rmd_cost_dc          <<";"
            << rmd_cost_ang         <<";"
            << rdo_cost_planar      <<";"
            << rdo_cost_dc          <<";"
            << rdo_cost_ang_h       <<";"
            << rdo_cost_ang_v       <<";"
            << rdo_cost_mip         <<";"
            << rdo_cost_isp_h       <<";"
            << rdo_cost_isp_v       <<";"
            */
            << sum                  <<";"
            << media                <<";"
            << vari                 <<";"
            << gradH                <<";"
            << gradV                <<";"
            << razao_grad           <<";"
            << grad_razao_pixels    <<";"
            << desvioPadrao         <<";"
            << BestAngularMode      <<";"
            << Best_Block_Ang_V     <<";"
            << BestPartitioning     <<";"
            << Best_Block_H
            <<endl;
           // inicializaFeatures();
    } 
    
    void extracaoDados::inicializaFeatures(){

        depth               = 111111;
        qtDepth             = 111111;
        mtDepht             = 111111;
        videoWidth          = 111111;
        videoHeight         = 111111;
        cuPosX              = 111111;
        cuPosY              = 111111;
        cuWidth             = 111111;
        cuHeight            = 111111;
        gama                = 111111;
        gama_H              = 111111;
        gama_H_1            = 111111;
        cos_1               = 111111;
        WSPSNR              = 111111;
        RD_cost             = 111111;
        SAD_ang             = 111111;
        SATD_ang            = 111111;
        SAD_MIP             = 111111;
        SATD_MIP            = 111111;
        /*
        rdo_cost_planar     = 111111;
        rmd_cost_planar     = 111111;
        rmd_cost_dc         = 111111;
        rmd_cost_ang        = 111111;
        rdo_cost_dc         = 111111;
        rdo_cost_ang_h      = 111111;
        rdo_cost_ang_v      = 111111;
        rdo_cost_mip        = 111111;
        rdo_cost_isp_h      = 111111;
        rdo_cost_isp_v      = 111111;
        */
        //sum                 = 111111;
        //media               = 111111;
        //vari                = 111111;
        //gradH               = 111111;
        //gradV               = 111111;
        //razao_grad          = 111111;
        //grad_razao_pixels   = 111111;
        //desvioPadrao        = 111111;
        BestAngularMode     = 111111;
        Best_Block_Ang_V    = 111111;
        BestPartitioning    = 111111;
        Best_Block_H        = 111111;
    }
#endif

void extracaoDados::criarArquivo(){

#if EXTRA_TEMPOS
    arqTempos.open("ExtracaoDados/" +nameVideo + "_QP_" + to_string(numQp) +"_nFrames_"+ to_string(numFrames) +"_tempos.csv", ios::app);
    arqTempos << "Função;TempoClock"<<endl;
#endif    
    
#if EXTRA_FEATURES
    
    arqFeatures.open("ExtracaoDados/" +nameVideo + "_QP_" + to_string(numQp) +"_nFrames_"+ to_string(numFrames) +"_features.csv", ios::app);
    arqFeatures <<
                    "qp;"
                    "depth;"
                    "qt_depht;"
                    "mt_depth;"
                    "video_width;"
                    "video_heigh;"
                    "cu_pos_x;"
                    "cu_pos_y;"
                    "cu_width;"
                    "cu_height;"
                    "gama;"
                    "gama/H;"
                    "gama/H_(-1_1);"
                    "1/cos(phi);"
                    "WSPSNR;"
                    "RD_cost;"
                    "SAD_ang;"
                    "SATD_ang;"
                    "SAD_MIP;"
                    "SATD_MIP;"
                    /*
                    "rmd_cost_planar;"
                    "rmd_cost_dc;"
                    "rmd_cost_ang;"
                    "rdo_cost_planar;"
                    "rdo_cost_dc;"
                    "rdo_cost_ang_h;"
                    "rdo_cost_ang_v;"
                    "rdo_cost_mip;"
                    "rdo_cost_isp_h;"
                    "rdo_cost_isp_v;"
                    */
                    "sum;"
                    "media;"
                    "vari;"
                    "gradH;"
                    "gradV;"
                    "razao_grad;"
                    "grad_razao_pixels;"
                    "desvioPadrao;"
                    "BestAngularMode;"
                    "Best_Block_Ang_V;"
                    "BestPartitioning;"
                    "Best_Block_H"
                    <<endl;
#endif
    
}    
    
extracaoDados::extracaoDados(string _nameVideo, int _numQP,int _numFrames, int _widthVideo, int _heightVideo) {
    
    nameVideo    = _nameVideo;
    numQp        = _numQP;
    numFrames    = _numFrames;
    widthVideo   = _widthVideo;
    heightVideo  = _heightVideo;
    criarArquivo();
}


void extracaoDados::registraTempo(string _funcao, float _tempoClock){
    arqTempos << _funcao <<";"<< convertePontoVirgula(to_string(_tempoClock))<<endl;
}

string extracaoDados::convertePontoVirgula(string _valor){  
    string valor=_valor;
    valor.replace(valor.rfind("."),1,",");
    return valor;   
}

void extracaoDados::resgistraDadosBlocos(string _nomeFuncao, map<string,long int>_mapTamBlocos, map<string,long int>_mapTemBlocos, int _totalNumBlocos, float _totalTemBlocos, string _tamanhosCU[], int _tamVetor){
    
    arqBlocos << "Contagem Blocos função:;"<<_nomeFuncao<<endl;
    arqBlocos << "Tam. Bloco;Nº Blocos;Tempo (seg)"<<endl;
    
    for(int i=0;i<_tamVetor;i++){
        arqBlocos << _tamanhosCU[i]<<";"<<_mapTamBlocos[_tamanhosCU[i]]<<";"<<convertePontoVirgula(to_string(_mapTemBlocos[_tamanhosCU[i]] * 1.0 / CLOCKS_PER_SEC)) <<endl;
    }
    
    arqBlocos <<"Total Blocos "<<_nomeFuncao<<";"<< _totalNumBlocos <<";"<<convertePontoVirgula(to_string(_totalTemBlocos * 1.0 / CLOCKS_PER_SEC))<<endl; 
    arqBlocos <<endl<<endl;
}

extracaoDados::~extracaoDados() {
}

