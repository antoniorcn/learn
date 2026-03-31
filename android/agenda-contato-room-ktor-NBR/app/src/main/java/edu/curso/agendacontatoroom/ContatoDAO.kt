package edu.curso.agendacontatoroom

import androidx.room.Dao
import androidx.room.Delete
import androidx.room.Insert
import androidx.room.OnConflictStrategy
import androidx.room.Query
import kotlinx.coroutines.flow.Flow

@Dao
interface ContatoDAO {

    @Query("Select * from Contato")
    fun getAll() : Flow<List<Contato>>

    @Insert
    suspend fun insert(contato : Contato)

    @Insert(onConflict = OnConflictStrategy.REPLACE)
    suspend fun insertAll(contatos: List<Contato>)

    @Delete
    suspend fun delete(contato : Contato)

    @Query("DELETE FROM Contato")
    suspend fun clear()
}