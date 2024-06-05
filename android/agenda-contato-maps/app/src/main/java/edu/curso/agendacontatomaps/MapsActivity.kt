package edu.curso.agendacontatomaps

import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatActivity
import com.google.android.gms.maps.CameraUpdateFactory
import com.google.android.gms.maps.GoogleMap
import com.google.android.gms.maps.OnMapReadyCallback
import com.google.android.gms.maps.SupportMapFragment
import com.google.android.gms.maps.model.LatLng
import com.google.android.gms.maps.model.MarkerOptions

class MapsActivity() : AppCompatActivity(), OnMapReadyCallback {
    private lateinit var mMap: GoogleMap
    override fun onCreate(bundle : Bundle?) {
        super.onCreate(bundle)
        setContentView(R.layout.maps_layout)
        val mapFragment = supportFragmentManager
            .findFragmentById(R.id.map) as SupportMapFragment
        mapFragment.getMapAsync(this)
    }

    override fun onMapReady(googleMap: GoogleMap) {
        mMap = googleMap

        val paulista = LatLng(-23.56396624738181, -46.652418689265666)
        val zoomLevel = 20f
        /*
            1: Mundo
            5: Continente
            10: Cidade
            15: Ruas
            20: Construções
         */
        mMap.addMarker(
            MarkerOptions()
            .position(paulista)
            .title("Marker in São Paulo"))
        mMap.moveCamera(CameraUpdateFactory.newLatLngZoom(paulista, zoomLevel))


        mMap.setOnMapClickListener { point ->
            Log.d("DEBUG", "Map clicado [" +
                    point.latitude + " / " +
                    point.longitude + "]");
        };
    }
}