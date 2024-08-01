/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.auto;

/**
 *
 * @author DELL LATITUDE 5401
 */
public class Auto {

    //atributos
        private String marca;
        private String color;
        private String tipo;
        private String modelo;
        private int cantidadpasajeros;
        // constructor
        public Auto(String marca, String color, String tipo){
            this.marca = marca;
            this.color = color;
            this.tipo =tipo;
            this.modelo = modelo;
            this.cantidadpasajeros = cantidadpasajeros;
        }
        // Getters y setters
        public String getmarca(){
            return marca;
        }
        public void setmarca(String marca){
            this.marca = marca;
        }
        public String getcolor(){
            return color;
        }
        public void setcolor(String color){
            this.color = color;
        }
        public String gettipo(){
            return tipo;
        }
        public void settipo(String tipo){
            this.tipo =tipo;
        }
        public String getmodelo (){
            return modelo;
        }
        public void setmodelo(String modelo){
            this.modelo =modelo;
        }
        public int getcantidadpasajeros(){
            return cantidadpasajeros;
        }
        public void setcantidadpasajeros(int cantidadpasajeros){
            this.cantidadpasajeros =cantidadpasajeros;
        }
        // metodo que muestra la informacion
        public void mostrarInformacion(){
            System.out.println("Marca: "+ marca);
            System.out.println("Color: "+ color);
            System.out.println("Tipo: "+ tipo);
            System.out.println("Modelo: "+ modelo);
            System.out.println("Cantidad de pasajeros: "+ cantidadpasajeros);
        }
    }

